#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long n;
    cin>>n;
    if((n%2)==0){
      for(long i=1;i<n;i+=2){
        cout<<(i+1)<<" "<<i<<" ";
      }
      cout<<endl;
    }
    else{
      long i=1;
      for(i=1;i<n-2;i+=2){
        cout<<(i+1)<<" "<<i<<" ";
      }
      cout<<(i+1)<<" "<<(i+2)<<" "<<i<<endl;
    }
  }
  return 0;
}
