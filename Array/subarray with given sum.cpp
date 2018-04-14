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
   ll n,sum; cin >> n>> sum;
   ll a[n+1];
   for(int i=0;i<n;i++) cin >> a[i];
   int start=0,sum_so_far=a[0]; 
     for(int i=1;i<=n;i++){
          if(sum_so_far >sum && start<=i-1){
            sum_so_far=sum_so_far-a[start];
            start++;
          }
          if(sum_so_far==sum){
            cout << start <<" " << i-1;
            return 1;
          }
          if(i<n)
            sum_so_far+=a[i];
   }
   cout << -1;   
   return 0; 
}