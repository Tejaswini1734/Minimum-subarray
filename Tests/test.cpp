// Tests/test.cpp

#include <iostream>
#include <vector>
#include "Solutions/solution.cpp"

#define ASSERT(test, expected) \
    if ((test) != (expected)) { \
        std::cout << "❌ Test failed: got " << (test) << ", expected " << (expected) << std::endl; \
        return 1; \
    } else { \
        std::cout << "✅ Test passed" << std::endl; \
    }

int main() {
    Solution sol;

    std::vector<int> nums1 = {2, 3, 1, 2, 4, 3};
    ASSERT(sol.minSubArrayLen(7, nums1), 2);

    std::vector<int> nums2 = {1, 4, 4};
    ASSERT(sol.minSubArrayLen(4, nums2), 1);

    std::vector<int> nums3 = {1, 1, 1, 1, 1, 1, 1, 1};
    ASSERT(sol.minSubArrayLen(11, nums3), 0);

    std::vector<int> nums4 = {1, 2, 3, 4, 5};
    ASSERT(sol.minSubArrayLen(11, nums4), 3);

    std::vector<int> nums5 = {1, 2, 3, 4, 5};
    ASSERT(sol.minSubArrayLen(15, nums5), 5);

    std::vector<int> nums6 = {5, 1, 3, 5, 10, 7, 4, 9, 2, 8};
    ASSERT(sol.minSubArrayLen(15, nums6), 2);

    std::vector<int> nums7 = {1};
    ASSERT(sol.minSubArrayLen(1, nums7), 1);

    std::vector<int> nums8 = {1};
    ASSERT(sol.minSubArrayLen(2, nums8), 0);

    std::vector<int> nums9 = {2, 3, 1, 2, 4, 3};
    ASSERT(sol.minSubArrayLen(8, nums9), 3);

    std::vector<int> nums10 = {1, 1, 1, 1, 7};
    ASSERT(sol.minSubArrayLen(7, nums10), 1);

    std::cout << "🎉 All test cases passed!" << std::endl;
    return 0;
}
