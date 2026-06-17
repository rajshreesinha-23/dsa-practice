#include <stdio.h>

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int n = 6;

    int j = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    printf("Rearranged array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
