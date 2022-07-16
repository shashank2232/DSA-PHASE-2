 // RAT IN A MAZE(BACKTRACKING)
 bool isSafe(int a,int b,int n,vector < vector < int >> & arr,vector<vector<bool>>&visited)
{
    // conditions we are checking:
//     1. it should be inside our matrix
//     2. there should be a path i.e. 1 to move on as we can't move to 0
//     3. it should not be visited
    if((a>=0 && a<n) && (b>=0 && b<n) && arr[a][b]==1 && visited[a][b]!=1)
    {
        return true;
    }
    else{
        return false;
    }
}
// answer is passed by reference and not by call by value as if we do pass by value it will not modify answer and so we won't get our answer
void solve(int x,int y,vector < vector < int >> & arr,int n,vector<string>&ans,vector<vector<bool>>&visited,string path)
{
    // when we reach our destination, insert string path into our answer and return back
    if(x==n-1 && y==n-1)
    {
        ans.push_back(path);
        return;
    }
    // down
    if(isSafe(x+1,y,n,arr,visited))
    {
        visited[x][y]=1;
        solve(x+1,y,arr,n,ans,visited,path + 'D');
        visited[x][y]=0;
    }
    // left
    if(isSafe(x,y-1,n,arr,visited))
    {
        visited[x][y]=1;    // marking our path as visited
        solve(x,y-1,arr,n,ans,visited,path + 'L');    
        visited[x][y]=0;   // marking our path as not visited or 0 as when we come back for another possible answer or solution, we won't be able to find it if it will be marked visited i.e. 1
    }
    // right
    if(isSafe(x,y+1,n,arr,visited))
    {
        visited[x][y]=1;
        solve(x,y+1,arr,n,ans,visited,path + 'R');
        visited[x][y]=0;
    }
    // up
    if(isSafe(x-1,y,n,arr,visited))
    {
        visited[x][y]=1;
        solve(x-1,y,arr,n,ans,visited,path + 'U');
        visited[x][y]=0;
    }
}
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    // Write your code here.
    vector<string>ans;
    vector<vector<bool>>visited(n,vector<bool>(n,0));      // this is a technique to make a visited bool vector of vectors with each value 0
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             visited[i][j]=0;
//         }
//     }
    if(arr[0][0]==0)
    {
        return ans;
    }
    string path="";
    solve(0,0,arr,n,ans,visited,path);
    return ans;
}