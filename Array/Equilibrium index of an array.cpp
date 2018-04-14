/* Harshit Anand
    IIIT Allahabad*/
#include <bits/stdc++.h>
using namespace std;
#define  ll long long
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)

int find_element(int a[],int n){
    int left_sum=0, right_sum=0;
    for(int i=1;i<n;i++) right_sum+=a[i];
    for(int i = 0, j = 1; j < n; i++, j++){
        right_sum-=a[j];
        left_sum+=a[i];    
        if(left_sum==right_sum)
          return i+2;
    }
    return -1;
}
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
        if(n==1) cout << 1<< endl;

        else{
            cout << find_element(a,n) ;
            cout << endl;
        }     
    }
    
     return 0; 
}