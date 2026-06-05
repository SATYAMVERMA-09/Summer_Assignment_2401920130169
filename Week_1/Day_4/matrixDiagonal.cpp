#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int i = 0, j = 0;
        while(i < mat.size() && j < mat[0].size())
            ans += mat[i++][j++];

        i = 0;
        j = mat[0].size()-1;
        while(i < mat.size() && j >= 0) {
            if(i != j) ans += mat[i][j];
            i++; j--;
        }
        return ans;
    }
};

int main() {
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> mat[i][j];

    Solution sol;
    cout << sol.diagonalSum(mat) << "\n";

    return 0;
}