#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  long long u,v,s,d;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>u>>v;
    d=u+v;
    s=(((d+1)*(d+2))/2)-d;
    cout<<s+(d-v)<<endl;
  }
  return 0;
}
