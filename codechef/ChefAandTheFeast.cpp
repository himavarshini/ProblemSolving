#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,tmpsum=0,t;
    cin>>n;
    int i=0;
    long long a1[n];
    for(i=0;i<n;i++){
        cin >> a1[i];
    }
    sort(a1,a1+n);
    long long sum=0;
    for(i=0;i<n;i++){
        if(a1[i]<0){
            sum+=a1[i];
        }
        else
            break;
    }
    if(i<n){
        tmpsum=0,t=(n-i);
        for(;i<n;i++){
            tmpsum+=a1[i];
        }
        tmpsum*=t;
    }
    sum+=tmpsum;
    cout<<sum<<endl;
    return 0;
}
