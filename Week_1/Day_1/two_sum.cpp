#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size()-1; i++) {
            for(int j = i+1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) return {i, j};
            }
        }
        return {};
    }
};

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    cin >> target;

    Solution sol;
    vector<int> result = sol.twoSum(nums, target);

    if(result.empty()) cout << "No solution found\n";
    else cout << "[" << result[0] << ", " << result[1] << "]\n";

    return 0;
}