#include<bits/stdc++.h>
using namespace std;
void MaxHeapify(int a[],int n,int i){
  int l=2*i+1;
  int r=2*i+2;
  if(l>=n)
    return;
  int max=i;
  if(a[l]>a[max]){
    max=l;
  }
  if((r<n) && (a[max]<a[r])){
    max=r;
  }
  if(max!=i){
    swap(a[i],a[max]);
    MaxHeapify(a,n,max);
  }
}
void BuildMaxHeap(int a[],int n){
  for(int i=floor(n-1/2);i>=0;i--){
    MaxHeapify(a,n,i);
  }
}
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  BuildMaxHeap(a,n);
  for(int i=n-1;i>=0;i--){
  swap(a[0],a[i]);
  MaxHeapify(a,i,0);
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<"  ";
  }
  cout<<endl;
return 0;
}
