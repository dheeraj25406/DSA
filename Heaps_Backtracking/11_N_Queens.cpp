//LC 51
//Approach : Backtracking, add queens column by column and check

class Solution {
public:
    void adsol(vector<vector<int>>& board,vector<vector<string>>& ans,int n){
        vector<string> tmp;
        for(int i=0;i<n;i++){
            string row="";
            for(int j=0;j<n;j++){
                if(board[i][j]==1)    row+='Q';
                else    row+='.';
            }
            tmp.push_back(row);
        }
        ans.push_back(tmp);
    }
    bool isSafe(int row,int col,vector<vector<int>>& board,int n){
        int x=row,y=col;
        while(y>=0){
            if(board[x][y]==1)  return false;
            y--;
        }
        y=col;
        while(x>=0 && y>=0){
            if(board[x][y]==1)  return false;
            x--;
            y--;
        }
        x=row,y=col;
        while(x<n && y>=0){
            if(board[x][y]==1)  return false;
            x++;
            y--;
        }
        return true;
    }
    void solve(int col,int n,vector<vector<string>>& ans,vector<vector<int>>& board){
        if(col==n){
            adsol(board,ans,n);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col]=1;
                solve(col+1,n,ans,board);
                board[row][col]=0;
            }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<vector<int>> board(n,vector<int>(n,0));
        solve(0,n,ans,board);
        return ans;                
    }
};
