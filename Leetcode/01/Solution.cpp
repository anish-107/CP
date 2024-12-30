#include <iostream>
#include <vector>
using namespace std;

// Solution class
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int sum = 0;

            for(int i = 0; i < nums.size(); i++) {
                for(int j = i + 1; j < nums.size(); j++) {
                    sum = nums[i] + nums[j];
                    if (sum == target) {
                        return {i, j};
                    }
                }
            }
            return {};
        }
};


// Driver Code
int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }
    

    return 0;
}