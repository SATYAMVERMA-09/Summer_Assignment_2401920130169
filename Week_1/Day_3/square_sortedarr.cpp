#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int s = 0;
        int e = nums.size()-1;
        int idx = e;
        for(int i = nums.size()-1; i >= 0; i--) {
            if(abs(nums[s]) >= abs(nums[e])) {
                ans[idx--] = nums[s] * nums[s];
                s++;
            } else {
                ans[idx--] = nums[e] * nums[e];
                e--;
            }
        }
        return ans;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    Solution sol;
    vector<int> result = sol.sortedSquares(nums);

    for(int i = 0; i < result.size(); i++) cout << result[i] << " ";
    cout << "\n";

    return 0;
}