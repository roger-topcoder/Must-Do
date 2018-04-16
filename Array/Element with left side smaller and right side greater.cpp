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
      int a[n+1];
      for(int i=0;i<n;i++)
      {
        cin >> a[i];
      }
      int left_max[n];
      int right_min[n];
      left_max[0]=a[0];
      for(int i=1;i<n;i++){
        left_max[i]=max(left_max[i-1],a[i]);
      }
      right_min[n-1]=a[n-1];
      for(int i=n-2;i>=0;i--){
          right_min[i]=min(a[i],right_min[i+1]);
      }
      int flag=0;
      for(int i=1;i<=n-2;i++){
        if(a[i]>=left_max[i] && a[i] <=right_min[i]){
          cout << a[i]<<endl;
          flag=1;
          break;
        }       
      }
      if(flag==0)
        cout << -1<< endl;   
   }   
   return 0; 
}