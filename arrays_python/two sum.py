def twoSum(nums, target):
    # go through each number
    for i in range(len(nums)):
        # check with every next number
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]
