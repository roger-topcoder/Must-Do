/* Harshit Anand
    IIIT Allahabad*/
#include <bits/stdc++.h>
using namespace std;
#define  ll long long
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)

 int water(int a[],int n){
  int right[n+1],left[n+1];
  int ans=0;
  left[0]=a[0];
  for(int i=1;i<n;i++){
    left[i]=max(left[i-1],a[i]);
  }
  right[n-1]=a[n-1];
  for(int i=n-2;i>=0;i--){
    right[i]=max(right[i+1],a[i]);
  }
  for(int i=0;i<n;i++){
     ans+=min(left[i],right[i])-a[i];
  }
  return ans;
 }
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
      int a[n+1];
      for(int i=0;i<n;i++) cin >> a[i];
      cout << water(a,n);
      cout << endl;
   }   
   return 0; 
}