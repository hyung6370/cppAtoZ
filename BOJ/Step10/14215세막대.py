nums = sorted(list(map(int, input().split())))

if nums[2] >= nums[0] + nums[1]:
    print(2 * (nums[0] + nums[1]) - 1)
else:
    print(sum(nums))