
signed main(){
  io;
  string a="babgbag";int n=a.size();string b="bag";int m=b.size();
  vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
  cout<<DS(n,m,a,b,dp)<<endl;
}