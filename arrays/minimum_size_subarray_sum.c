#include <stdio.h>

int minSubArrayLen(int target, int arr[], int n) {
    int left = 0, sum = 0, minLen = n + 1;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum >= target) {
            if (right - left + 1 < minLen)
                minLen = right - left + 1;
            sum -= arr[left++];
        }
    }

    return (minLen == n + 1) ? 0 : minLen;
}

int main() {
    int arr[] = {2,3,1,2,4,3};
    int target = 7;
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Min Length: %d", minSubArrayLen(target, arr, n));
    return 0;
}
