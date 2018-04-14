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
   int n;
   cin >> n; int a[n+1];
   set <int> s;
   set <int>:: iterator it;
   for(int i=0;i<n;i++){
        cin >> a[i];
        set <int>:: iterator it=s.find(a[i]);
        if(it!=s.end())
          s.insert(a[i]+1);
        else
            s.insert(a[i]);
   }int sum=0;
   for( it=s.begin();it!=s.end();it++){
      sum+= *it;
   }
   cout << sum;
   return 0; 
}