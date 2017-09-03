#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  long n;
  cin>>n;
  long a[n];
  long sum=0;
  for(long i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
  }
  long prefixsum[n],suffixsum[n];
  suffixsum[n-1]=a[n-1];
  prefixsum[0]=a[0];
  for(long i=1,j=n-2;(i<n)&&(j>=0);i++,j--){
    prefixsum[i]=prefixsum[i-1]+a[i];
    suffixsum[j]=suffixsum[j+1]+a[j];
    //cout<<prefixsum[i]<<" "<<suffixsum[j]<<endl;
  }
  long min=prefixsum[0]+suffixsum[0];
  long index=0;
  for(long i=1;i<n;i++){
    if((prefixsum[i]+suffixsum[i])<min){
      min=prefixsum[i]+suffixsum[i];
      index=i;
    }
  }
  cout<<(index+1)<<endl;
  }
  return 0;
}
