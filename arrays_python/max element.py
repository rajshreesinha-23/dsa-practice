def findMax(nums):
    max_num = nums[0]  # assume first is max

    for num in nums:
        if num > max_num:
            max_num = num

    return max_num
