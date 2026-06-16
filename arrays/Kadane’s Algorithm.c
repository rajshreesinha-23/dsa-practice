#include <stdio.h>

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = 9;

    int max_sum = arr[0], curr = arr[0];

    for(int i = 1; i < n; i++) {
        if(curr < 0)
            curr = arr[i];
        else
            curr += arr[i];

        if(curr > max_sum)
            max_sum = curr;
    }

    printf("Max Subarray Sum = %d", max_sum);

    return 0;
}
