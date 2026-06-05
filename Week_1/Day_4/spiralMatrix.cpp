#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;

        int startingRow = 0;
        int endingCol = col - 1;
        int startingCol = 0;
        int endingRow = row - 1;

        while(count < total) {
            for(int index = startingCol; count < total && index <= endingCol; index++) {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            for(int index = startingRow; count < total && index <= endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            for(int index = endingCol; count < total && index >= startingCol; index--) {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            for(int index = endingRow; count < total && index >= startingRow; index--) {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> matrix[i][j];

    Solution sol;
    vector<int> result = sol.spiralOrder(matrix);

    for(int x : result) cout << x << " ";
    cout << "\n";

    return 0;
}