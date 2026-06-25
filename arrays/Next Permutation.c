void nextPermutation(int arr[], int n) {
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) i--;

    if (i >= 0) {
        int j = n - 1;
        while (arr[j] <= arr[i]) j--;
        int temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
    }

    // reverse
    int l = i + 1, r = n - 1;
    while (l < r) {
        int temp = arr[l]; arr[l] = arr[r]; arr[r] = temp;
        l++; r--;
    }
}
