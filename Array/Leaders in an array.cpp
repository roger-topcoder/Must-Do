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
         int n; cin >> n;
         int a[n+1];
         for(int i=0;i<n;i++) cin >> a[i];
          int max=a[n-1];
          stack<int> s;
         for(int i=n-2;i>=0;i--){
            if(a[i]>max){
              s.push(a[i]);
              max=a[i];
            }   
         } 
        while(!s.empty()){
              cout << s.top() << " ";
              s.pop();
        }
        cout << a[n-1] << " ";
        cout << endl;
    }
  
   return 0; 
}