class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int totalrow = grid.size();
        int totalcol = grid[0].size();
        int row = 0; 
        int col = grid[0].size()-1;
        int count = 0;
        while(row < totalrow && col >= 0){
            if(grid[row][col] >= 0){
                row++;
            } else {
                count += totalrow-row;
                col--;
            }
        }
        return count;
    }
};