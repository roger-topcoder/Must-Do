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
      int n,k;
      cin >> n>>k;
      vector<int> v;
      while(n>0){
          v.push_back(n%2);
          n/=2;
      }
      if(v[k])
        cout << "Yes";
      else
          cout <<"No";
        cout <<endl;
   }   
   return 0; 
}