//link to the question:- https://leetcode.com/problems/rotate-image/
class Solution {
public:
    //function to take transpose of a matrix
    //Time complexity of this function = O(n^2)
    void transpose_matrix(vector<vector<int>> &matrix)
    {
        for(int rowindex = 0; rowindex<matrix.size() ; rowindex++)
        {
            for(int colindex = rowindex + 1;colindex < matrix[rowindex].size();colindex++)
            {
                int temp = matrix[rowindex][colindex];
                matrix[rowindex][colindex] = matrix[colindex][rowindex];
                matrix[colindex][rowindex] = temp;
            }
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        //firstly  take transpose of matrix
        // in transpose rows become column and vice-versa
        transpose_matrix(matrix);
        //after taking the transpose reverse each row of the matrix to achieve 90 degree rotation
        for(int rowindex = 0; rowindex <matrix.size();rowindex++)
        {
            int colindex = 0;
            int rev_colindex = matrix[rowindex].size() - 1;
            while(colindex < rev_colindex)
            {
                int temp = matrix[rowindex][colindex];
                matrix[rowindex][colindex] = matrix[rowindex][rev_colindex];
                matrix[rowindex][rev_colindex] = temp;
                colindex++;
                rev_colindex--;
            }
        }
        //Overall time complexity is O(n^2) +O(n^2) and space complexity is O(1);
    }
};
