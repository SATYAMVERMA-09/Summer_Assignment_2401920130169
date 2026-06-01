#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0;
        int maxp = INT_MIN;
        int curr = prices[0];

        for(int i = 0; i < prices.size(); i++) {
            diff = prices[i] - curr;
            if(diff < 0) curr = prices[i];
            if(diff > maxp) maxp = diff;
        }
        return maxp;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for(int i = 0; i < n; i++) cin >> prices[i];

    Solution sol;
    cout << sol.maxProfit(prices) << "\n";

    return 0;
}