#include<bits/stdc++.h>
using namespace std ;


int main(){
int t ;
cin>>t ;
int u=t;
while(t--){
    vector<int>v;
   long long  n ,x,y;
   cin>>n>>x>>y;
   long long  sum = (n*(n+1))/2;
   long long  k = x+y;
 
   if(sum%k==0){
        int r = sum/k;
        x = x*r;
        for(int i = n ; i>0;i--){
        if(x==0){
            break;
        }
        else if(x>=i){
            x = x-i;
            v.push_back(i);
        } 
        }

        cout<<"Case #"<<(u-t)<<": "<< "POSSIBLE"<< endl;
        cout<<v.size()<<endl;
        for(int i =0 ;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
   }
   else{
       cout<<"Case #"<<(u-t)<<": "<< "IMPOSSIBLE"<< endl;
   }
}
}