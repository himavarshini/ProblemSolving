#include <bits/stdc++.h>
using namespace std;
int fibo(int i,int fib[]){
  if(i==1){
    return 0;
  }
  if(i==2)
    return 1;
  if(fib[i-1]!=0)
    return fib[i-1];
  fib[i-1]=fibo(i-1,fib)+fibo(i-2,fib);
  return fib[i-1];
}
int main(){
  int n;
  cin>>n;
  int fib[n];
  for(int i=0;i<n;i++){
    fib[i]=0;
  }
  fib[n-1]=fibo(n,fib);
  cout<<fib[n-1]<<endl;
  return 0;
}
