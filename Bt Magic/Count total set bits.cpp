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
  int t; 
  cin >> t; 
  while(t--) 
  { 
    int n; 
    cin >> n; 
    int ans = 0; 
    for(int i=1;i<=n;i++) 
    { 
      int k = i; 
      while(k) 
      { 
        if(k%2) 
          ans++; 
        k/=2; 
      } 
    } 
    cout << ans << endl; 
  } 
         return 0; 
   }   
