#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int longestConsecutive(int arr[], int n) {
    if (n == 0) return 0;

    // Sort array
    qsort(arr, n, sizeof(int), compare);

    int longest = 1, current = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) continue;

        if (arr[i] == arr[i - 1] + 1) {
            current++;
        } else {
            if (current > longest)
                longest = current;
            current = 1;
        }
    }

    return (current > longest) ? current : longest;
}

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Longest Consecutive Sequence Length: %d\n", longestConsecutive(arr, n));
    return 0;
}
