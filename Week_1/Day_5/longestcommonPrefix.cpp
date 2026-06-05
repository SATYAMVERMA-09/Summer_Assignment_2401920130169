#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int cnt = 0;
        int mini = INT_MAX;
        for(int i = 0; i < strs.size(); i++)
            mini = min(mini, (int)strs[i].size());

        for(int i = 0; i < mini; i++) {
            bool flag = true;
            for(int j = 1; j < strs.size(); j++) {
                if(strs[j][i] != strs[j-1][i]) {
                    flag = false;
                    break;
                }
            }
            if(!flag) break;
            else cnt++;
        }

        string ans = "";
        for(int i = 0; i < cnt; i++) ans.push_back(strs[0][i]);
        return ans;
    }
};

int main() {
    int n;
    cin >> n;
    vector<string> strs(n);
    for(int i = 0; i < n; i++) cin >> strs[i];

    Solution sol;
    cout << sol.longestCommonPrefix(strs) << "\n";

    return 0;
}