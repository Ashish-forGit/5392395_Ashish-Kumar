#include <stdio.h>
#include <string.h>

int anagram(char* s) {
    int len = strlen(s);
    if (len % 2 != 0) {
        return -1;
    }

    int freq1[26] = {0};
    int freq2[26] = {0};

    int mid = len / 2;

    for (int i = 0; i < mid; i++) {
        freq1[s[i] - 'a']++;
    }
    for (int i = mid; i < len; i++) {
        freq2[s[i] - 'a']++;
    }

    int changes = 0;
    for (int i = 0; i < 26; i++) {
        if (freq1[i] > freq2[i]) {
            changes += freq1[i] - freq2[i];
        }
    }

    return changes;
}

int main() {
    int t;
    scanf("%d", &t);
    char s[10001];
    while (t--) {
        scanf("%s", s);
        printf("%d\n", anagram(s));
    }
    return 0;
}
