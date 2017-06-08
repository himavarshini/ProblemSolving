#include<bits/stdc++.h>
using namespace std;
int isSafe(int Q[],int n,int i,int j){
  for(int l=i,m=j;(l>=0)&&(m>=0);l--,m--){
    if(Q[l]==m)
      return 0;
  }
  for(int l=i,m=j;(l>=0)&&(m<n);l--,m++){
    if(Q[l]==m)
      return 0;
  }
  for(int l=i,m=j;l>=0;l--){
    if(Q[l]==m)
      return 0;
  }
  return 1;
}
int main(){
  int n,flag=0;
  cin>>n;
  int Q[n];
  for(int i=0;i<n;i++){
    Q[i]=-1;
  }
  int i=0,j=0;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(isSafe(Q,n,i,j)){
        Q[i]=j;j=n;
        if(i==(n-1))
          {flag=1;break;}
      }
      else{
        i--;
        j=Q[i]+1;
        Q[i]=-1;
      }
    }
    if(flag==1){
      break;
    }
  }
    for(i=0;i<n;i++){
      cout<<Q[i]<<" ";
    }
    cout<<endl;
  return 0;
}
