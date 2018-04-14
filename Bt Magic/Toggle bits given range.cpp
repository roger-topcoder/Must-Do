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
      int n,l,r;
      cin >> n>>l>>r;
      vector<int> v;
      while(n>0){
        v.push_back(n%2);
        n/=2;
      }vector<int>v1;
      for(int i=v.size()-1;i>=0;i--)
        v1.push_back(v[i]);
      for(int i=l-1;i<=r-1;i++)
          if(v1[i]==1)
            v1[i]=0;
          else
            v1[i]=1; 
          for(int i=0;i<v1.size();i++) cout << v1[i] << " ";
      int decimal=0;
      for(int i=0;i<v1.size();i++){
        decimal = decimal << 1 | v1[i];
      }
      cout << decimal << endl;
   }   
   return 0; 
}