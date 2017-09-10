#include <bits/stdc++.h>
using namespace std;
void operation(long long a[],long long op[][3], long long t,long long l, long long r){
  if(t==1){
    for(long long j=l;j<=r;j++){
      a[j]++;
    }

  }
  else{
    for(long long j=l;j<=r;j++){
    operation(a,op,op[j][0],op[j][1]-1,op[j][2]-1);
   }
  }
//  cout<<a[0]<<endl;

  return ;
}
int main(){
  long long t;
  long long int p=10e9 + 7;
  cin>>t;
  while(t--){
    long long n,m;
    cin>>n>>m;
    long long a[n];
    for(long long i=0;i<n;i++){
      a[i]=0;
    }
    long long op[m][3];
    for(long long i=0;i<m;i++){
      cin>>op[i][0]>>op[i][1]>>op[i][2];
    }
    for(long long j=0;j<m;j++){

    operation(a,op,op[j][0],op[j][1]-1,op[j][2]-1);
   }
   for(long long i=0;i<n;i++){
     cout<<a[i]%p<<" ";
   }
   cout<<endl;
 }
  return 0;
}
