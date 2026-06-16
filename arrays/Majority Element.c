#include <stdio.h>

int main() {
    int arr[] = {2,2,1,1,2,2,2};
    int n = 7;

    int count = 0, candidate;

    for(int i = 0; i < n; i++) {
        if(count == 0)
            candidate = arr[i];

        if(arr[i] == candidate)
            count++;
        else
            count--;
    }

    printf("Majority Element = %d", candidate);
    return 0;
}
