// N-QUEEN 2 (BACKTRACKING)  we have to return total number of possible solutions
class Solution {
    bool isSafe(int row,int col,int n,vector<string>&board)
    {
        int a=row;
        int b=col;
        // left upper diagonal
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            row--;
            col--;
        }
        row=a;
        col=b;
        // left lower diagonal
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            row++;
            col--;
        }
        row=a;
        col=b;
        // left
        while(col>=0)
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            col--;
        }
        return true;
    }
    void solve(int col,int &count,vector<string>&board,int n,vector<vector<int>>&ans)
    {
        // base case
        if(col==n)
        {
            // ans.push_back(board);
            count++;
            return;
        }
        // rec case
        for(int row=0;row<n;row++)
        {
            if(isSafe(row,col,n,board))
            {
                board[row][col]='Q';
                solve(col+1,count,board,n,ans);
                board[row][col]='.';
            }
        }
    }
public:
    int totalNQueens(int n) {
        vector<vector<int>>ans;
        int count=0;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        solve(0,count,board,n,ans);
        return count;
    }
};