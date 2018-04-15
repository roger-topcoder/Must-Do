/* Harshit Anand
    IIIT Allahabad*/
#include <bits/stdc++.h>
using namespace std;
#define  ll long long
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)

unsigned int swap(unsigned int x){
  unsigned int even_bits= x & 0xAAAAAAAA;
  unsigned int odd_bits= x & 0x55555555;
  even_bits>>=1;
  odd_bits<<=1;
  return (even_bits|odd_bits);
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
      unsigned int x;
      cin >>x;
      cout << swap(x);
   }   
   return 0; 
}