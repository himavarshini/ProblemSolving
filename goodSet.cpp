#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  for(int i=0;i<t;i++){
    cin >>n;

      int a=1;
      for(int j=0;j<n;j++){
        cout<<a<<" ";
        a+=2;
      }
    cout<<endl;
  }
  return 0;
}
