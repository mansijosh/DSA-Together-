/*Give a N*N square matrix, return an array of its anti-diagonals in top-leftmost to bottom-rightmost order. In an element of a anti-diagonal (i, j), surrounding elements 
will be (i+1, j-1) and (i-1, j+1). Look at the examples for more clarity*/


class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>ans;
        int col=0,row=0;
        while(col<m && row<n){
        int i=col;
        int j=row;
        while(i>=0 && j<n){
            ans.push_back(matrix[j][i]);
            i--;
            j++;
        }
        if(col<m-1) col++;
        else row++;
        }
        return ans;
        
    }
};
