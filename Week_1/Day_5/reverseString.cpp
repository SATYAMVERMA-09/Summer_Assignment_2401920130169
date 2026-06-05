#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;
        while(start < end) {
            swap(s[start++], s[end--]);
        }
    }
};

int main() {
    string input;
    getline(cin, input);
    vector<char> s(input.begin(), input.end());

    Solution sol;
    sol.reverseString(s);

    for(char c : s) cout << c;
    cout << "\n";

    return 0;
}