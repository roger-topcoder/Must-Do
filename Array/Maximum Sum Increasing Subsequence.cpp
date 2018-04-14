/* Harshit Anand
    IIIT Allahabad*/
#include <bits/stdc++.h>
using namespace std;
#define  ll long long
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)

 lis(int a[], int n){
  int ls[n+1];
 for(int i=0;i<n;i++) ls[i]=a[i];
  for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
      if(a[i]>a[j] && ls[i]<ls[j]+a[i])
        ls[i]=ls[j]+a[i];
    }
  } int maximum=0;
  for(int i=1;i<n;i++){
    if(ls[i]>maximum)
      maximum=ls[i];
  }
  return maximum;

}
int main()
{
    fast_io;
    if(fopen("input.txt", "r"))
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    }
   int n; cin >> n;
   int a[n+1];
   for(int i=0;i<n;i++) cin >> a[i];
   int max= lis(a,n);
   cout << max; 
   return 0; 
}