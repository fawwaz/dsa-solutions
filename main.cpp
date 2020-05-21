#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
  public:
    <vector<vector<int>> solve(vector<vector<int>> matrix);
};

vector<vector<int>> Solution::solve(vector<vector<int>>& matrix) {
    // Write your code here
    vector<vector<int>> newMatrix;
    set<int> xLocation;
    set<int> yLocation;
    for (int i=0; i<matrix.size(); i++) {
        vector<int> curRow;
        for(int j=0; j<matrix.size(); i++) {
            curRow.push_back(matrix[i][j]);
            if (matrix[i][j] == 0) {
                xLocation.insert(i);
                yLocation.insert(j);
            }
        }
        newMatrix.push_back(curRow);
    }
    
    for(int i=0; i<matrix.size(); i++) {
        if (xLocation.find(i) != xLocation.end()) {
            for(int j=0; j<matrix.size(); i++) {
                newMatrix[i][j] = 0;
            }
        } else {
            for(int j=0; j<matrix.size(); i++) {
                if (yLocation.find(j) != yLocation.end()) {
                    newMatrix[i][j] = 0;   
                } else {
                    newMatrix[i][j] = matrix[i][j];
                }
            }
        }
    }
    
    return newMatrix;
}

int main() {

  return 0;
}
