#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int type;
    int len;
    char *data;
} Action;

typedef struct {
    char *s;
    int size;
    int cap;
} DynStr;

static void ensure_cap(DynStr *ds, int need) {
    if (need <= ds->cap) return;
    int ncap = ds->cap ? ds->cap : 1;
    while (ncap < need) ncap <<= 1;
    ds->s = (char*)realloc(ds->s, ncap);
    ds->cap = ncap;
}

static void append(DynStr *ds, const char *t, int len) {
    ensure_cap(ds, ds->size + len + 1);
    memcpy(ds->s + ds->size, t, len);
    ds->size += len;
    ds->s[ds->size] = '\0';
}

static void del_last(DynStr *ds, int k) {
    if (k <= 0) return;
    if (k > ds->size) k = ds->size;
    ds->size -= k;
    ds->s[ds->size] = '\0';
}

int main(void) {
    int Q;
    if (scanf("%d", &Q) != 1) return 0;

    DynStr cur = {NULL, 0, 0};
    ensure_cap(&cur, 1);
    cur.s[0] = '\0';

    Action *stack = (Action*)malloc(sizeof(Action) * Q);
    int top = 0;

    char *buf = (char*)malloc(1000005);

    for (int i = 0; i < Q; i++) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            scanf("%s", buf);
            int len = (int)strlen(buf);
            append(&cur, buf, len);
            stack[top].type = 1;
            stack[top].len = len;
            stack[top].data = NULL;
            top++;
        } else if (type == 2) {
            int k; scanf("%d", &k);
            if (k > cur.size) k = cur.size;
            Action a;
            a.type = 2;
            a.len = k;
            a.data = (char*)malloc(k + 1);
            memcpy(a.data, cur.s + (cur.size - k), k);
            a.data[k] = '\0';
            del_last(&cur, k);
            stack[top++] = a;
        } else if (type == 3) {
            int k; scanf("%d", &k);
            if (k >= 1 && k <= cur.size) {
                putchar(cur.s[k - 1]);
                putchar('\n');
            }
        } else if (type == 4) {
            if (top > 0) {
                Action a = stack[--top];
                if (a.type == 1) {
                    del_last(&cur, a.len);
                } else if (a.type == 2) {
                    append(&cur, a.data, a.len);
                    free(a.data);
                }
            }
        }
    }

    for (int i = 0; i < top; i++) {
        if (stack[i].type == 2) free(stack[i].data);
    }
    free(stack);
    free(cur.s);
    free(buf);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int type;
    int len;
    char *data;
} Action;

typedef struct {
    char *s;
    int size;
    int cap;
} DynStr;

static void ensure_cap(DynStr *ds, int need) {
    if (need <= ds->cap) return;
    int ncap = ds->cap ? ds->cap : 1;
    while (ncap < need) ncap <<= 1;
    ds->s = (char*)realloc(ds->s, ncap);
    ds->cap = ncap;
}

static void append(DynStr *ds, const char *t, int len) {
    ensure_cap(ds, ds->size + len + 1);
    memcpy(ds->s + ds->size, t, len);
    ds->size += len;
    ds->s[ds->size] = '\0';
}

static void del_last(DynStr *ds, int k) {
    if (k <= 0) return;
    if (k > ds->size) k = ds->size;
    ds->size -= k;
    ds->s[ds->size] = '\0';
}

int main(void) {
    int Q;
    if (scanf("%d", &Q) != 1) return 0;

    DynStr cur = {NULL, 0, 0};
    ensure_cap(&cur, 1);
    cur.s[0] = '\0';

    Action *stack = (Action*)malloc(sizeof(Action) * Q);
    int top = 0;

    char *buf = (char*)malloc(1000005);

    for (int i = 0; i < Q; i++) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            scanf("%s", buf);
            int len = (int)strlen(buf);
            append(&cur, buf, len);
            stack[top].type = 1;
            stack[top].len = len;
            stack[top].data = NULL;
            top++;
        } else if (type == 2) {
            int k; scanf("%d", &k);
            if (k > cur.size) k = cur.size;
            Action a;
            a.type = 2;
            a.len = k;
            a.data = (char*)malloc(k + 1);
            memcpy(a.data, cur.s + (cur.size - k), k);
            a.data[k] = '\0';
            del_last(&cur, k);
            stack[top++] = a;
        } else if (type == 3) {
            int k; scanf("%d", &k);
            if (k >= 1 && k <= cur.size) {
                putchar(cur.s[k - 1]);
                putchar('\n');
            }
        } else if (type == 4) {
            if (top > 0) {
                Action a = stack[--top];
                if (a.type == 1) {
                    del_last(&cur, a.len);
                } else if (a.type == 2) {
                    append(&cur, a.data, a.len);
                    free(a.data);
                }
            }
        }
    }

    for (int i = 0; i < top; i++) {
        if (stack[i].type == 2) free(stack[i].data);
    }
    free(stack);
    free(cur.s);
    free(buf);
    return 0;
}
