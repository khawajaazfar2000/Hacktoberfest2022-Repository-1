void bs_insert(int x, vector<int> &s){
    if(s.size() == 0){
        return ;
    }
    if(s.back() == x){
        return;
    }
    int n = s.size();
    int l = 0, r = n-1;
    while (l < r){
        int mid = l + (r-l)/2;
        if(s[mid] >= x){
            r = mid;
        }
        else{
            l = mid+1;
        }
    }
    s[l] = x;
    // return s[l];
}

int Solution::lis(const vector<int> &A) {
    int n = A.size();

    vector<int> stack;

    for(int i = 0; i<n; i++){
        if(stack.empty() || stack.back() < A[i]){
            stack.push_back(A[i]);
        }
        else{
            bs_insert(A[i], stack);
        }
    }

    return stack.size();
}