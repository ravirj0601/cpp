#include<iostream>
#include<vector>
using namespace std;
vector<int> spiral(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total = row*col;
        
        // Indexes 
        int startRow = 0;
        int startCol = 0;
        int endRow = row - 1;
        int endCol = col - 1;
        
        while(count < total){
            //print Starting Row
            for(int index = startCol;count<total && index<=endCol;index++){
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;
            //print ending column
            for(int index = startRow;count<total && index>=endRow;index++){
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;
            //print Ending Row
            for(int index = endCol;count<total && index>=startCol;index--){
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;
            //print Starting column
            for(int index = endRow;count<total && index>=startRow; index--){
                ans.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;  
    }
int main(){

    vector<vector<int>> arr = [[1,2,3],[4,5,6],[5,4,3]];
    vector<int> answer = spiral(arr);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<answer[i][j];
        }
        
    }
    


return 0;
}