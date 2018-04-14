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
    int n; cin >> n;
    int a[n+1];
    for(int i=0;i<n;i++) cin >> a[i];
    int left_sum[n+1], right_sum[n+1];
    right_sum[0]=a[0], left_sum[n-1]=a[n-1];   
      for(int i=1;i<n;i++) right_sum[i]=right_sum
        [i-1]+a[i];
        for(int i=n-2;i>=0;i--) left_sum[i]=left_sum[i+1]+a[i];


    for(int i = 0; i < n; i++){
        if(left_sum[i]==right_sum[i])
          cout << i << " "<< a[i];
    }
     return 0; 
}