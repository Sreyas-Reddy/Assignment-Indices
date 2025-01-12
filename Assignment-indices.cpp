#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(const std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                return std::vector<int>{numMap[complement], i};  // Use vector construction
            }
            numMap[nums[i]] = i;
        }
        return std::vector<int>{};  // Use vector construction
    }
};

int main() {
    Solution solution;

    // Example 1
    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    auto result1 = solution.twoSum(nums1, target1);
    std::cout << "Example 1 Output: [" << result1[0] << ", " << result1[1] << "]\n";

    // Example 2
    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    auto result2 = solution.twoSum(nums2, target2);
    std::cout << "Example 2 Output: [" << result2[0] << ", " << result2[1] << "]\n";

    // Example 3
    std::vector<int> nums3 = {3, 3};
    int target3 = 6;
    auto result3 = solution.twoSum(nums3, target3);
    std::cout << "Example 3 Output: [" << result3[0] << ", " << result3[1] << "]\n";

    return 0;
}