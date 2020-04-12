void subsetUtil(vector<int> &A,vector<vector<int>> &res,vector<int> &subset,int index)
{
    res.push_back(subset);
    for(int i = index;i<A.size();i++)
    {
        subset.push_back(A[i]);
        subsetUtil(A,res,subset,i+1);
        subset.pop_back();
    }
    
    return;
}



vector<vector<int> > Solution::subsets(vector<int> &A) {
    
    vector<int> subset;
    vector<vector<int>> res;
    int index = 0;
    if(A.size())
       sort(A.begin(),A.end());
    subsetUtil(A,res,subset,index);
    return res;
    }
