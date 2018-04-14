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
      int n; cin >> n; int a[n+1];
      priority_queue<int,vector<int>, greater<int>> pq;
      for(int i=0;i<n;i++){
          cin >> a[i];
          pq.push(a[i]);
      }
      int k; cin >> k;
      for(int i=0;i<k-1;i++){
          pq.pop();
      }
      cout << pq.top() << endl;
   }


   
   return 0; 
}