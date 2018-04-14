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
   ll n; cin >> n;
   ll a[n+1],h[3]={0};
   for(int i=0;i<n;i++) cin >> a[i];
   for(int i=0;i<n;i++){
      h[a[i]]++;
   }
   for(int i=0;i<h[0];i++) a[i]=0;
    for(int i=h[0];i<n-h[0];i++) a[i]=1;
      for(int i=n-h[0];i<n;i++) a[i]=2;

      for(int i=0;i<n;i++) cout << a[i] << " ";   

   return 0; 
}