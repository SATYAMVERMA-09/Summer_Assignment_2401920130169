#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = -1;
        int s = 0;
        int e = height.size()-1;
        while(s < e) {
            int area = min(height[s], height[e]) * (e-s);
            max_area = max(max_area, area);
            if(height[s] > height[e]) e--;
            else s++;
        }
        return max_area;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> height(n);
    for(int i = 0; i < n; i++) cin >> height[i];

    Solution sol;
    cout << sol.maxArea(height) << "\n";

    return 0;
}