/* Harshit Anand
    IIIT Allahabad*/
#include <bits/stdc++.h>
using namespace std;
#define  ll long long
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)

void swap_012(int *c, int *d){
  int temp;
  temp=*c;
  *c=*d;
  *d=temp;
}

void sort_array(int a[],int n){
  int lo=0,mid=0,high=n-1;
  while(mid<=high){
    switch(a[mid]){
      case 0:
      swap_012(&a[lo++],&a[mid++]);
      break;

      case 1:
      mid++;
      break;

      case 2:
      swap_012(&a[mid],&a[high--]);
      break;
    }
  }
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
      int n; cin >> n; int a[n+1];
      for(int i=0;i<n;i++) cin >> a[i];
      sort_array(a,n);
      for(int i=0;i<n;i++) cout << a[i] << " ";
      cout << endl; 
  }
  
   return 0; 
}