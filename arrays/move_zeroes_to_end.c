#include <stdio.h>

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    int j = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }

    while(j < n) {
        arr[j++] = 0;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
