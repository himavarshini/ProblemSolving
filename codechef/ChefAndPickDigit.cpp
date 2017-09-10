#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string N;
    cin>>N;
    int a[10]={0},b[26]={0};
    int count=0;
  for(long long i=0;i<(N.length())&&(count<=10);i++){
      a[N[i]-'0']++;
      if(a[N[i]-'0']==2){
        count++;
      }
    }
    count=0;
    for(int i=65;(i<90)&&(count<26);i++){
      int t1,t2;
      t2=i%10;
      t1=i/10;
      if(t1==t2){
        if(a[t1]==2){
          b[i-'A']=1;
          count++;
        }
      }
      else{
        if((a[t1]>=1)&&(a[t2]>=1)){
          b[i-'A']=1;
          count++;
        }
      }
    }
    for(int i=0;i<26;i++){
      if(b[i]==1){
        cout<<(char)(i+65);
      }
    }
    cout<<endl;
  }
  return 0;
}
