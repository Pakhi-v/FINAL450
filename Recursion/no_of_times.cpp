//Print n times
void fun(vector<string> &ans, int i, int n){
    if(i<n){
        return;
    }
    ans.push_back("Coding Ninjas");
    fun(ans,i+1,n);
}
vector<string> printNTimes(int n){
    vector<string> ans;
    int i = 1;
    fun(ans,i,n);
    return ans;
}