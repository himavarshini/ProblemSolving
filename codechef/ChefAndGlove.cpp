#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    int i=0,f=0,ba=0;
    for( i=0;i<n;i++){
      if(a[i]<=b[i]){
      }
      else break;
    }
    if(i==n){
      f=1;
    }
    for( i=0;i<n;i++){
      if(a[i]<=b[n-i-1]){
      }
      else break;
    }
    if(i==n){
      ba=1;
    }
    if((f==1) && (ba==1)){
      cout<<"both"<<endl;
    }
    else if(f==1){
      cout<<"front"<<endl;
    }
    else if(ba==1){
      cout<<"back"<<endl;
    }
    else{
      cout<<"none"<<endl;
    }
  }
}
