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
        freopen("output.txt","w",stdout);
    }
   int t; cin >> t;
   while(t--){
     int n;
     cin >> n; 
     ll a[n+1],x1=0,x2=0,ans;
     for(int i=0;i<n-1;i++){
         cin >> a[i];
         x1=x1^a[i];
     } 
     for(int i=1;i<=n;i++){
         x2=x2^i;
     } 
     ans=x1^x2;
     cout << ans<< endl;   
     }
   return 0; 
}