#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MOD 1000000007

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

long long power(long long base, long long exp) {
    long long res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

int legoBlocks(int n, int m) {
    long long* rowWays = malloc((m + 1) * sizeof(long long));
    long long* totalWays = malloc((m + 1) * sizeof(long long));
    long long* solidWays = malloc((m + 1) * sizeof(long long));

    rowWays[0] = 1;
    for (int i = 1; i <= m; i++) {
        rowWays[i] = 0;
        if (i >= 1) rowWays[i] = (rowWays[i] + rowWays[i - 1]) % MOD;
        if (i >= 2) rowWays[i] = (rowWays[i] + rowWays[i - 2]) % MOD;
        if (i >= 3) rowWays[i] = (rowWays[i] + rowWays[i - 3]) % MOD;
        if (i >= 4) rowWays[i] = (rowWays[i] + rowWays[i - 4]) % MOD;
    }

    for (int i = 1; i <= m; i++) {
        totalWays[i] = power(rowWays[i], n);
    }

    solidWays[0] = 0;
    for (int i = 1; i <= m; i++) {
        long long temp = totalWays[i];
        for (int j = 1; j < i; j++) {
            temp = (temp - (solidWays[j] * totalWays[i - j]) % MOD + MOD) % MOD;
        }
        solidWays[i] = temp;
    }

    int ans = (int)(solidWays[m] % MOD);
    free(rowWays);
    free(totalWays);
    free(solidWays);
    return ans;
}

int main() {
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");
    int t = parse_int(ltrim(rtrim(readline())));
    for (int t_itr = 0; t_itr < t; t_itr++) {
        char** first_multiple_input = split_string(rtrim(readline()));
        int n = parse_int(*(first_multiple_input + 0));
        int m = parse_int(*(first_multiple_input + 1));
        int result = legoBlocks(n, m);
        fprintf(fptr, "%d\n", result);
    }
    fclose(fptr);
    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);
    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);
        if (!line) break;
        data_length += strlen(cursor);
        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') break;
        alloc_length <<= 1;
        data = realloc(data, alloc_length);
        if (!data) { data = '\0'; break; }
    }
    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
        data = realloc(data, data_length);
        if (!data) data = '\0';
    } else {
        data = realloc(data, data_length + 1);
        if (!data) { data = '\0'; }
        else { data[data_length] = '\0'; }
    }
    return data;
}

char* ltrim(char* str) {
    if (!str) return '\0';
    if (!*str) return str;
    while (*str != '\0' && isspace(*str)) str++;
    return str;
}

char* rtrim(char* str) {
    if (!str) return '\0';
    if (!*str) return str;
    char* end = str + strlen(str) - 1;
    while (end >= str && isspace(*end)) end--;
    *(end + 1) = '\0';
    return str;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");
    int spaces = 0;
    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) return splits;
        splits[spaces - 1] = token;
        token = strtok(NULL, " ");
    }
    return splits;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);
    if (endptr == str || *endptr != '\0') exit(EXIT_FAILURE);
    return value;
}
