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
      ll n; cin >>n;
      //int i=0;
      vector<int> binary;
      while(n>0){
        binary.push_back(n%2);
        n=n/2;
        //i++;
      }int flag=0;
      for(int i=0;i<binary.size()-1;i++){
        if(binary[i]==binary[i+1] && binary[i]==1){
          flag=1;
        }
        }
        if(flag==1)
           cout << 0 <<endl;
        else
          cout << 1 <<endl;
      }
         return 0; 
   }   
