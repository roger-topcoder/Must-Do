/* Harshit Anand
    IIIT Allahabad*/
#include <bits/stdc++.h>
using namespace std;
#define  ll long long
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    if(fopen("input.txt", "r"))
    {
        freopen("input.txt", "r", stdin);
        freopen("output1.txt","w",stdout);
    }
   int t; cin >> t;
   while(t--){
      int n;
      cin >> n;
      vector<int> v;
      while(n>0){
          v.push_back(n%2);
          n/=2;
      }
      int ans=0,ctr=0;
      for(int i=0;i<v.size();i++){
        if(v[i]==1)
          ctr++;
        else
          ctr=0;
        ans=max(ans,ctr);
      }
      
      cout << ans<<endl;
   }   
   return 0; 
}