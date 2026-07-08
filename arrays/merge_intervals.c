#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start, end;
} Interval;

int compare(const void *a, const void *b) {
    return ((Interval *)a)->start - ((Interval *)b)->start;
}

void mergeIntervals(Interval arr[], int n) {
    qsort(arr, n, sizeof(Interval), compare);

    int index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[index].end >= arr[i].start) {
            arr[index].end = arr[index].end > arr[i].end ? arr[index].end : arr[i].end;
        } else {
            index++;
            arr[index] = arr[i];
        }
    }

    for (int i = 0; i <= index; i++) {
        printf("[%d, %d] ", arr[i].start, arr[i].end);
    }
}
