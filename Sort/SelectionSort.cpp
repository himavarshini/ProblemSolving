#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,tmp;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    k=i;
    for(int j=i+1;j<n;j++){
      if(a[k]>a[j])
        k=j;
    }
    tmp=a[i];
    a[i]=a[k];
    a[k]=tmp;
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
