// test.c

#include <stdio.h>

// Declare the function to test
int minSubArrayLen(int target, int* nums, int numsSize);

// Macro to check and report each test
#define ASSERT(test, expected, testNum) \
    if ((test) != (expected)) { \
        printf("❌ Test case #%d failed: got %d, expected %d\n", testNum, (test), (expected)); \
        return 1; \
    } else { \
        printf("✅ Test case #%d passed\n", testNum); \
    }

int main() {
    int nums1[] = {2,3,1,2,4,3};
    ASSERT(minSubArrayLen(7, nums1, 6), 2, 1);

    int nums2[] = {1,4,4};
    ASSERT(minSubArrayLen(4, nums2, 3), 1, 2);

    int nums3[] = {1,1,1,1,1,1,1,1};
    ASSERT(minSubArrayLen(11, nums3, 8), 0, 3);

    int nums4[] = {1,2,3,4,5};
    ASSERT(minSubArrayLen(11, nums4, 5), 3, 4);

    int nums5[] = {1,2,3,4,5};
    ASSERT(minSubArrayLen(15, nums5, 5), 5, 5);

    int nums6[] = {5,1,3,5,10,7,4,9,2,8};
    ASSERT(minSubArrayLen(15, nums6, 10), 2, 6);

    int nums7[] = {1};
    ASSERT(minSubArrayLen(1, nums7, 1), 1, 7);

    int nums8[] = {1};
    ASSERT(minSubArrayLen(2, nums8, 1), 0, 8);

    int nums9[] = {2,3,1,2,4,3};
    ASSERT(minSubArrayLen(8, nums9, 6), 3, 9);

    int nums10[] = {1,1,1,1,7};
    ASSERT(minSubArrayLen(7, nums10, 5), 1, 10);

    printf("\n🎉 All test cases passed!\n");
    return 0;
}
