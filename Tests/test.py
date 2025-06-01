# test.py

import math
from solution import min_sub_array_len

def test_case(target, nums, expected, test_num):
    result = min_sub_array_len(target, nums)
    if result == expected:
        print(f"✅ Test case #{test_num} passed")
    else:
        print(f"❌ Test case #{test_num} failed: Expected {expected}, got {result}")

def run_tests():
    test_case(7, [2, 3, 1, 2, 4, 3], 2, 1)
    test_case(4, [1, 4, 4], 1, 2)
    test_case(11, [1, 1, 1, 1, 1, 1, 1, 1], 0, 3)
    test_case(11, [1, 2, 3, 4, 5], 3, 4)
    test_case(15, [1, 2, 3, 4, 5], 5, 5)
    test_case(15, [5, 1, 3, 5, 10, 7, 4, 9, 2, 8], 2, 6)
    test_case(1, [1], 1, 7)
    test_case(2, [1], 0, 8)
    test_case(8, [2, 3, 1, 2, 4, 3], 3, 9)
    test_case(7, [1, 1, 1, 1, 7], 1, 10)

if __name__ == "__main__":
    run_tests()
