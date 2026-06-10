def move_zeros(arr):
    n = len(arr)
    count = 0  # position for next non-zero

    # Move non-zero elements forward
    for i in range(n):
        if arr[i] != 0:
            arr[count] = arr[i]
            count += 1

    # Fill remaining positions with 0
    while count < n:
        arr[count] = 0
        count += 1

    return arr


# Input
arr = list(map(int, input("Enter elements: ").split()))

# Output
result = move_zeros(arr)
print("Output:", result)
