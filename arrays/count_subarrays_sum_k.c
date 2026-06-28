#include <stdio.h>

int countSubarrays(int arr[], int n, int k) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == k)
                count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3};
    int n = 3, k = 3;

    printf("Count: %d", countSubarrays(arr, n, k));
    return 0;
}
