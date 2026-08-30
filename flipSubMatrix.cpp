#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> flipSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
    // Reverse rows inside the k x k submatrix
    for (int i = 0; i < k / 2; i++) {
        int topRow = x + i;
        int bottomRow = x + k - 1 - i;
        for (int j = 0; j < k; j++) {
            swap(grid[topRow][y + j], grid[bottomRow][y + j]);
        }
    }
    return grid;
}

int main() {
    vector<vector<int>> grid1 = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int x1 = 1, y1 = 0, k1 = 3;
    vector<vector<int>> res1 = flipSubmatrix(grid1, x1, y1, k1);
    for (auto &row : res1) {
        for (auto &val : row) cout << val << " ";
        cout << "\n";
    }

    cout << "----\n";

    vector<vector<int>> grid2 = {{3,4,2,3},{2,3,4,2}};
    int x2 = 0, y2 = 2, k2 = 2;
    vector<vector<int>> res2 = flipSubmatrix(grid2, x2, y2, k2);
    for (auto &row : res2) {
        for (auto &val : row) cout << val << " ";
        cout << "\n";
    }
}
