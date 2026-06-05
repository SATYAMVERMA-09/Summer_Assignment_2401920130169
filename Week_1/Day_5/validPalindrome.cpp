#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    string fixing(string s, int n) {
        string ans = "";
        for(int i = 0; i < n; i++) {
            if('A' <= s[i] && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
                ans.push_back(s[i]);
            } else if('0' <= s[i] && s[i] <= '9') {
                ans.push_back(s[i]);
            } else if('a' <= s[i] && s[i] <= 'z') {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }

public:
    bool isPalindrome(string s) {
        int n = s.size();
        string ans = fixing(s, n);
        n = ans.size();
        int s1 = 0;
        int e = n - 1;
        while(s1 < e) {
            if(ans[s1] != ans[e]) return false;
            s1++;
            e--;
        }
        return true;
    }
};

int main() {
    string s;
    getline(cin, s);

    Solution sol;
    cout << (sol.isPalindrome(s) ? "true" : "false") << "\n";

    return 0;
}