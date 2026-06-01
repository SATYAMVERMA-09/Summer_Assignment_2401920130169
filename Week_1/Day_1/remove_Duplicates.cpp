#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                nums.erase(nums.begin()+i-1);
                i--;
            } else {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    Solution sol;
    int k = sol.removeDuplicates(nums);

    cout << k << "\n";
    for(int i = 0; i < k; i++) cout << nums[i] << " ";
    cout << "\n";

    return 0;
}