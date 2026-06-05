#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        int matrix_size = m*n;
        if(r*c != matrix_size) return mat;

        vector<vector<int>> v(r, vector<int>(c));
        for(int i = 0; i < matrix_size; i++)
            v[i/c][i%c] = mat[i/n][i%n];

        return v;
    }
};

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n));
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> mat[i][j];

    int r, c;
    cin >> r >> c;

    Solution sol;
    vector<vector<int>> result = sol.matrixReshape(mat, r, c);

    for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[0].size(); j++)
            cout << result[i][j] << " ";
        cout << "\n";
    }

    return 0;
}