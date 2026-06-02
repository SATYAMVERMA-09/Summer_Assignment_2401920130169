#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool ans = false;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]) {
                ans = true;
                break;
            }
        }
        return ans;
    }
};

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        int size;
        cin >> size;
        
        vector<int> nums(size);
        for (int i = 0; i < size; i++) {
            cin >> nums[i];
        }
        
        Solution sol;
        if (sol.containsDuplicate(nums)) {
            cout << "true\n";
        } else {
            cout << "false\n";
        }
    }
    
    return 0;
}