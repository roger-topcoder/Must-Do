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
      ll n; cin >> n;
      if(n==0){
        cout << "NO";
        continue;
      }
      if(ceil(log2(n))==floor(log2(n)))
        cout << "YES";
      else
        cout <<"NO";
      cout <<endl;
   }   
   return 0; 
}