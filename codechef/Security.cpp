#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  std::cout << std::setprecision(11)<< std::fixed;
  cin>>t;
  for(int i=0;i<t;i++){
    double u,v,x,time=0;
    cin>>u>>v>>x;
    time=x/(u+v);
    cout<<time<<endl;
  }
  return 0;
}
