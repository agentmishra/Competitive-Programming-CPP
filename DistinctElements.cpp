#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   int mod = 1e9 + 7;
   cin>>t;

   while(t--){
      int n;
      cin>>n;

      map<int,int> mp;

      for(int i = 0; i < n; i++){
         int num;
         cin>>num;

         mp[num]++;
      }

      int ans = 1;
      for(auto it : mp){
         ans *= (1 + it.second);
         ans %= mod;
      }

      ans = (ans - 1 + mod) % mod;
      cout<<ans<<endl;
   }
   return 0;
}