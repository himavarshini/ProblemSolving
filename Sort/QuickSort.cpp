#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int r){
  int pivot = arr[r];
  int i=l,j=l;
  for(i=l;i<r;i++){
    if(pivot>arr[i]){
      swap(arr[j++],arr[i]);
    }
  }
  swap(arr[j],arr[r]);
  return j;
}

void QuickSort(int arr[],int l,int r){
  if(l<r){
    int partitionIndex=partition(arr,l,r);
    QuickSort(arr,l,partitionIndex-1);
    QuickSort(arr,partitionIndex+1,r);
  }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for (size_t i = 0; i < n; i++) {
    cin>>arr[i];
  }
  QuickSort(arr,0,n-1);
  for (size_t i = 0; i < n; i++) {
    cout<<arr[i]<<" ";
  }
  return 0;
}
