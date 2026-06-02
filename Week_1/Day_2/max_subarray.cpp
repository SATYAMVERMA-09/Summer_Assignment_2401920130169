#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int sum = 0;
        for(int i =0;i<nums.size();i++){
            sum += nums[i];
            if(sum > max_sum) max_sum = sum;
            if(sum < 0) sum = 0;
        }
        return max_sum;
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
        cout << sol.maxSubArray(nums) << "\n";
    }
    
    return 0;
}