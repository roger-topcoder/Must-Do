/* Harshit Anand
    IIIT Allahabad*/
#include <bits/stdc++.h>
using namespace std;
#define  ll long long
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)
bool triplet(int a[],int n){
      for(int i=0;i<n;i++){
        a[i]=a[i]*a[i];
      }
          sort(a,a+n);
          for(int i=n-1;i>=2;i--){
            int l=0;
            int r=i-1;
            while(l<r){
              if(a[l]+a[r]==a[i]){
                return true;
              }
                (a[l]+a[r]<a[i])?l++:r--;
            }
          }
          return false;
}
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
    int n; cin >> n; int a[n+1];
    for(int i=0;i<n;i++) cin >> a[i];
      triplet(a,n) ? cout << "Yes": cout << "No";
      cout << endl;
   } 
   return 0; 
}