#include <stdio.h>

void nextGreater(int arr[], int n) {
    int stack[n], top = -1;

    for (int i = 0; i < n; i++) {
        while (top >= 0 && arr[i] > arr[stack[top]]) {
            printf("%d -> %d\n", arr[stack[top]], arr[i]);
            top--;
        }
        stack[++top] = i;
    }

    while (top >= 0) {
        printf("%d -> -1\n", arr[stack[top]]);
        top--;
    }
}
