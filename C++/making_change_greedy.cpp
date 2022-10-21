#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
//  ||          ||  || || || ||  || || || ||  || || || || ||
//  || ||    || ||  ||           ||                 ||
//  ||    ||    ||  || || ||     || || ||           ||
//  ||          ||  ||           ||                 ||
//  ||          ||  || || || ||  || || || ||        ||
void setIO(){
    fast:
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
void solve() {
    int n=10;
  int arr[n]={1,2,5,10,20,50,100,200,500,2000};
  int final=8;
  sort(arr,arr+n);
  int sum=0;
  bool flag=false;
  vector<int> v;
  map <int ,int,greater<int>> mp;
  for(int i=n-1;i>=0;i--){
      if(sum==final && final!=0){
          flag=true;
          break;
      }
    if(sum+arr[i]<=final){
        int tmp=(final-sum)/arr[i];
        mp.insert(pair<int,int>(arr[i],tmp));
      sum+=(arr[i]*tmp);
      if(i==0 && final==sum){
          flag=true;
      }
    }
    else if(i==0){
      cout<<"No solution possible"<<endl;
    }
  }
  if(flag){
      map<int, int>::iterator itr;
      for(itr=mp.begin();itr!=mp.end();itr++){
          cout<<itr->first<<" "<<itr->second<<endl;
      }
  }
  else {
      cout<<"No solution possible"<<endl;
  }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    setIO();

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}