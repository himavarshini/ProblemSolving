#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[],int l,int mid,int r){
  if(l==r){
    return;
  }
  int size1=mid-l+1,size2=r-mid;
  int L[size1],R[size2];
  for (size_t i = 0; i < size1; i++) {
    L[i]=arr[l+i];
  }
  for (size_t j = 0; j < size2; j++) {
    R[j]=arr[mid+j+1];
  }
  int i=0,j=0,k=l;
  while((i<size1)&&(j<size2)){
    if(L[i]<R[j]){
      arr[k++]=L[i++];
    }
    else{
      arr[k++]=R[j++];
    }
  }
  if(i<size1){
    while(i<size1){
      arr[k++]=L[i++];
    }
  }
  else{
    while(j<size2){
      arr[k++]=R[j++];
    }
  }
}

void MergeSort(int arr[],int l,int r){
  if(l<r){
    int mid=(l+r)/2;
    MergeSort(arr,l,mid);
    MergeSort(arr,mid+1,r);
    Merge(arr,l,mid,r);
  }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for (size_t i = 0; i < n; i++) {
    cin>>arr[i];
  }
  MergeSort(arr,0,n-1);
  for (size_t i = 0; i < n; i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
