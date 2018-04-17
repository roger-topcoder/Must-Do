/* Harshit Anand
    IIIT Allahabad*/
#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)
int zigzag(int a[],int n){
  bool flag=true;
  for(int i=0;i<=n-2;i++){
    if(flag){
      if(a[i]>a[i+1])
        swap(a[i],a[i+1]);
    }
    else{
      if(a[i]<a[i+1])
        swap(a[i],a[i+1]);
    }
    flag=!flag;
  }

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
    zigzag(a,n);
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
        cout << endl;
   }   
   return 0; 
}