/* Harshit Anand
    IIIT Allahabad*/
#include <bits/stdc++.h>
using namespace std;
#define  ll long long
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)

int kadanes(int a[],int t){
  int max_so_far=0, max_ending_here=0;
  for(int i=0;i<t;i++){
    max_ending_here+=a[i];
    if(max_ending_here<0)
      max_ending_here=0;
    else if(max_so_far<max_ending_here)
      max_so_far=max_ending_here;
  }
  if(max_so_far==0){
    max_so_far= -INT_MAX;
    for(int i=0;i<t;i++){
      max_so_far=max(max_so_far,a[i]);
    }
  }
  return max_so_far;
}

int main()
{
    fast_io;
    if(fopen("input.txt", "r"))
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    }
  int t;
  cin >> t; int a[t+1];
  for(int i=0;i<t;i++) cin >> a[i];
  int max=kadanes(a,t);
  cout << max;
   return 0; 
}