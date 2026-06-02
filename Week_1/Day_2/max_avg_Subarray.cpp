#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_ans = 0;
        for(int i =0;i<k;i++){
            max_ans += nums[i];
        }
        int s = 1;
        int e = k;
        int n = nums.size();
        double ans = max_ans;
        while(n>e){
            ans = ans -nums[s-1] + nums[e];
            if(max_ans<ans) max_ans = ans;
            s++;
            e++;
        }
        return max_ans/k;
    }
};

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        int size, k;
        cin >> size >> k;
        
        vector<int> nums(size);
        for (int i = 0; i < size; i++) {
            cin >> nums[i];
        }
        
        Solution sol;
        cout << sol.findMaxAverage(nums, k) << "\n";
    }
    
    return 0;
}