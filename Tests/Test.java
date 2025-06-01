package Tests;

import Solutions.Solution;

public class Test {
    public static void main(String[] args) {
       Solution solution = new Solution();

        int[][] testCases = {
            {7, 2, 3, 1, 2, 4, 3},       // Expected: 2
            {4, 1, 4, 4},                // Expected: 1
            {11, 1, 1, 1, 1, 1, 1, 1, 1}, // Expected: 0
            {11, 1, 2, 3, 4, 5},         // Expected: 3
            {15, 1, 2, 3, 4, 5},         // Expected: 5
            {15, 5, 1, 3, 5, 10, 7, 4, 9, 2, 8}, // Expected: 2
            {1, 1},                      // Expected: 1
            {2, 1},                      // Expected: 0
            {8, 2, 3, 1, 2, 4, 3},       // Expected: 3
            {7, 1, 1, 1, 1, 7}           // Expected: 1
        };

        int[] expectedResults = {2,1,0,3,5,2,1,0,3,1};

        boolean allPassed = true;

        for (int i = 0; i < testCases.length; i++) {
            int target = testCases[i][0];
            int[] nums = new int[testCases[i].length - 1];
            System.arraycopy(testCases[i], 1, nums, 0, nums.length);

            int result = solution.minSubArrayLen(target, nums);

            if (result == expectedResults[i]) {
                System.out.println("Test case #" + (i + 1) + ": ✅ Passed");
            } else {
                System.out.println("Test case #" + (i + 1) + ": ❌ Failed (Expected " + expectedResults[i] + ", got " + result + ")");
                allPassed = false;
            }
        }

        if (allPassed) {
            System.out.println("\n🎉 All test cases passed!");
        } else {
            System.out.println("\nSome test cases failed.");
        }
    }
}
 