void backtrack(int start,int k,vector<vector<int>> &ans,vector<int> &A,vector<int> &row)
{
    auto size = A.size();
    if(row.size()==k)
    {
        ans.emplace_back(row);
        return;
    }
    
    if(start>=size)
       return;
       
       
    row.emplace_back(A[start]);
    backtrack(start+1,k,ans,A,row);
    row.pop_back();
    backtrack(start+1,k,ans,A,row);
}


vector<vector<int> > Solution::combine(int n, int k) {
    vector<vector<int>> ans;
    vector<int> A;
    for(auto i = 1;i<n+1;i++)
        A.emplace_back(i);
        
    vector<int> row;
    backtrack(0,k,ans,A,row);
    return ans;
}
