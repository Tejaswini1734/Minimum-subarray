# solution.py
import math
def min_sub_array_len(target, nums):
    n = len(nums)
    min_len = math.inf
    current_sum = 0
    left = 0

    for right in range(n):
        current_sum += nums[right]
        while current_sum >= target:
            min_len = min(min_len, right - left + 1)
            current_sum -= nums[left]
            left += 1

    return min_len if min_len != math.inf else 0
