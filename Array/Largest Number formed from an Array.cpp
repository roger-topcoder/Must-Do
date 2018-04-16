/* Harshit Anand
    IIIT Allahabad*/
#include <bits/stdc++.h>
using namespace std;
#define  ll long long
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)

int cmp(string a,string b){
      string ab=a+b;
      string ba=b+a;
      if(ab>ba)
          return 1;
      else
        return 0;
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
    string a[n+1];
    for(int i=0;i<n;i++) cin >> a[i];   
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
          cout << a[i];
      cout << endl;
    }
     return 0; 
}