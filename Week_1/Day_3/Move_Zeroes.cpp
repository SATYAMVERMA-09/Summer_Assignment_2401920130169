#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    Solution sol;
    sol.moveZeroes(nums);

    for(int i = 0; i < nums.size(); i++) cout << nums[i] << " ";
    cout << "\n";

    return 0;
}