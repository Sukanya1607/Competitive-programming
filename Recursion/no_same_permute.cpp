#include<bits/stdc++.h>
using namespace std;
#define ll long long int
set<vector<ll>> p;
void permute(ll s[],vector<ll> e,int i,int n){

   if(i==n){
     p.insert(e);
     return;
   }
   for(int k=i;k<n;k++){
      swap(s[k],s[i]);
      e.push_back(s[i]);
      permute(s,e,i+1,n);
      e.pop_back();
     swap(s[k],s[i]);
   }
   return;
}
int main(){

    ll T=1;
    while(T--){
        ll a[1000];
        vector<ll> e;
        ll n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        permute(a,e,0,n);
   for(auto it:p){
        for(int i=0;i<it.size();i++)
        cout<<it[i]<<" ";

   cout<<"\n";
      }
    }

return 0;
}

