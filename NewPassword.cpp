#include<bits/stdc++.h>
using namespace std ;

string pass(string password,int n){
    int ans ;
    int ch1=0;
    int ch2=0;
    int ch3=0;
    int ch4=0;
    
    
    for(int i =0 ; i<n ;i++){
        if(password[i]>=65 && password[i]<=90){
            if(ch1==0){
                // cout<<"1"<<endl;
                ch1++;
            }
            else{
                continue;
            }
        }
        else if(password[i]>=48 && password[i]<=57){
            if(ch2==0){
                // cout<<"2"<<endl;
                ch2++;
            }
            else{
                continue;
            }
        }
        else if(password[i]>=97 && password[i]<=122){
            if(ch3==0){
                // cout<<"3"<<endl;
                ch3++;
            }
            else{
                continue;
            }
        }
      
        
         else if((password[i]>=32 && password[i]<=47) ||(password[i]>=58 && password[i]<=64)||(password[i]>=91 && password[i]<=98) ||(password[i]>=123 && password[i]<=126)){
            if(ch4==0){
                // cout<<"4"<<endl;
                ch4++;
            }
            else{
                continue;
            }
        }
    }
    if(ch1==0){
        password +='A';
    }
       if(ch2==0){
        password +='1';
    }
       if(ch3==0){
        password +='a';
    }
       if(ch4==0){
        password +='#';
    }
    if(password.length()<7){
        int x = 7-password.length();
        while(x--){
            password+='l';
        }
    }
    return password;
}


int main(){
int t ;
cin>>t ;
int f=t;
while(t--){
    int n ;
    cin>>n ;
    string password;
    cin>>password;
    string ans = pass(password,n); 
    cout<<"Case #"<<(f-t)<<": "<< ans<< endl;
    // cout<< ans<<endl;
}
}