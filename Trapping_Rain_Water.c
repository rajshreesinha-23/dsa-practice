#include <stdio.h>

int trap(int arr[], int n) {
    int left[n], right[n];
    left[0] = arr[0];

    for(int i = 1; i < n; i++)
        left[i] = (arr[i] > left[i-1]) ? arr[i] : left[i-1];

    right[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--)
        right[i] = (arr[i] > right[i+1]) ? arr[i] : right[i+1];

    int water = 0;
    for(int i = 0; i < n; i++)
        water += (left[i] < right[i] ? left[i] : right[i]) - arr[i];

    return water;
}

int main() {
    int arr[] = {3,0,2,0,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Water trapped: %d", trap(arr, n));
}
