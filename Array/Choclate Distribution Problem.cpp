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
      int n,m;
      cin >> n;
      int a[n+1];
      for(int i=0;i<n;i++){
        cin >> a[i];
      }
      sort(a,a+n);
      cin >> m;
      int min=INT_MAX;
      for(int i=0;i+m-1<n;i++){
          if((a[i+m-1]-a[i])<min)
            min=a[i+m-1]-a[i];
      }
      cout << min;
      cout << endl;

   }   
   return 0; 
}