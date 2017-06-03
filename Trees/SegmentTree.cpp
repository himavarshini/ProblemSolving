#include<bits/stdc++.h>
using namespace std;
int BuildST(int a[],int s,int e,int *st, int i){
  if(s==e){
    st[i]=a[s];
    return st[i];
  }
  int mid=(s+e)/2;
  st[i]=BuildST(a,s,mid,st,2*i+1)+BuildST(a,mid+1,e,st,2*i+2);

  return st[i];
}

int * BuildSegmentTree(int a[],int n){
  int x=ceil(log2(n));
  int size=2*(int)pow(2,x)-1;
  int *SegmentTree=new int[size];
  BuildST(a,0,n-1,SegmentTree,0);
  return SegmentTree;
}

int SumInRange(int st[],int i,int l,int r,int s,int e){
  if(l<=s && r>=e)
    return st[i];
  if(e<l || s>r)
    return 0;
  int mid = (e+s)/2;
  return SumInRange(st,2*i+1,l,r,s,mid)+SumInRange(st,2*i+2,l,r,mid+1,e);
}

void UpdateElement (int st[],int s,int e,int ind,int dif,int i){
  if(ind<s || ind>e)
  return ;
 st[i]=st[i]+dif;
 if(s!=e){
   int mid = (s+e)/2;
   UpdateElement(st,s,mid,ind,dif,2*i+1);
   UpdateElement(st,mid+1,e,ind,dif,2*i+2);
 }
}
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int *st = BuildSegmentTree(a,n);
  cout<<SumInRange(st,0,1,3,0,n-1)<<endl;
  int ind,Update;
  cin>>ind>>Update;
  int dif=Update-a[ind];
  UpdateElement(st,0,n-1,ind,dif,0);
  cout<<SumInRange(st,0,1,3,0,n-1)<<endl;
  return 0;
}
