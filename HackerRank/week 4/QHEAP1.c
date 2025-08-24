#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int heap[MAX];
int heapSize = 0;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapifyUp(int i) {
    while (i > 0 && heap[(i - 1) / 2] > heap[i]) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void heapifyDown(int i) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int smallest = i;

    if (left < heapSize && heap[left] < heap[smallest])
        smallest = left;
    if (right < heapSize && heap[right] < heap[smallest])
        smallest = right;

    if (smallest != i) {
        swap(&heap[i], &heap[smallest]);
        heapifyDown(smallest);
    }
}

void insert(int val) {
    heap[heapSize] = val;
    heapifyUp(heapSize);
    heapSize++;
}

int findMin() {
    return heap[0];
}

void delete(int val) {
    int i;
    for (i = 0; i < heapSize; i++) {
        if (heap[i] == val)
            break;
    }

    if (i == heapSize)
        return;

    heap[i] = heap[heapSize - 1];
    heapSize--;

    heapifyDown(i);
    heapifyUp(i);
}

int main() {
    int Q;
    scanf("%d", &Q);

    while (Q--) {
        int type, val;
        scanf("%d", &type);

        if (type == 1) {
            scanf("%d", &val);
            insert(val);
        } else if (type == 2) {
            scanf("%d", &val);
            delete(val);
        } else if (type == 3) {
            printf("%d\n", findMin());
        }
    }

    return 0;
}
