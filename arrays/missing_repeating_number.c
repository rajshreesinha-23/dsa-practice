#include <stdio.h>

void findMissingRepeating(int arr[], int n) {
    int xor1 = 0;

    // Step 1: XOR all elements and numbers from 1 to n
    for (int i = 0; i < n; i++)
        xor1 ^= arr[i];

    for (int i = 1; i <= n; i++)
        xor1 ^= i;

    // Step 2: Find rightmost set bit
    int set_bit = xor1 & ~(xor1 - 1);

    int x = 0, y = 0;

    // Step 3: Divide elements into two sets
    for (int i = 0; i < n; i++) {
        if (arr[i] & set_bit)
            x ^= arr[i];
        else
            y ^= arr[i];
    }

    for (int i = 1; i <= n; i++) {
        if (i & set_bit)
            x ^= i;
        else
            y ^= i;
    }

    // Step 4: Identify which is missing and which is repeating
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
            break;
        }
    }

    if (count)
        printf("Repeating: %d, Missing: %d\n", x, y);
    else
        printf("Repeating: %d, Missing: %d\n", y, x);
}

int main() {
    int arr[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMissingRepeating(arr, n);
    return 0;
}
