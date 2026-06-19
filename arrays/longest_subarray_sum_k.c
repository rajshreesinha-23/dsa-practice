#include <stdio.h>

int longestSubarray(int arr[], int n, int k) {
    int maxLen = 0;

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            if(sum == k) {
                if(j - i + 1 > maxLen)
                    maxLen = j - i + 1;
            }
        }
    }
    return maxLen;
}

int main() {
    int arr[] = {1, 2, 3, 1, 1, 1, 1};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Longest Length: %d", longestSubarray(arr, n, k));
    return 0;
}
