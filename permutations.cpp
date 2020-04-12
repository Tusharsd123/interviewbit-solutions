void permutation(vector<int> &A,int start,vector<vector<int>> &v)
{
    if(start>=A.size())
    {
        v.push_back(A);
        return;
    }
    
    for(auto i = start;i<A.size();i++)
    { 
        swap(A[start],A[i]);
        permutation(A,start+1,v);
        swap(A[start],A[i]);
        
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    
    vector<vector<int>> v;
    permutation(A,0,v);
    return v;
}
