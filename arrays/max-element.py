# Find Maximum Element in Array

def maxElement(arr):
    max_val = arr[0]
    for num in arr:
        if num > max_val:
            max_val = num
    return max_val

print(maxElement([3, 5, 1, 9, 2]))
