void backtrack(vector<int> &A,vector<int> &r,vector<vector<int>> ans,int index,int sum)
{
    if (sum < 0) 
        return; 
  
    // if we get exact answer 
    if (sum == 0) 
    { 
        res.push_back(r); 
        return; 
    } 
  
    // Recur for all remaining elements that 
    // have value smaller than sum. 
    while (i < ar.size() && sum - ar[i] >= 0) 
    { 
  
        // Till every element in the array starting 
        // from i which can contribute to the sum 
        r.push_back(ar[i]); // add them to list 
  
        // recur for next numbers 
        findNumbers(ar, sum - ar[i], res, r, i); 
        i++; 
  
        // remove number from list (backtracking) 
        r.pop_back(); 
    } 
}

vector<vector<int> > Solution::combinationSum(vector<int> &ar, int sum) {
     sort(ar.begin(), ar.end()); 
  
    // remove duplicates 
    ar.erase(unique(ar.begin(), ar.end()), ar.end()); 
  
    vector<int> r; 
    vector<vector<int> > res; 
    findNumbers(ar, sum, res, r, 0); 
  
    return res; 
}
