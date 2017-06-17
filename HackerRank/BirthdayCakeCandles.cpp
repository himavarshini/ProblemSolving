#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);  
    int count=0;
    for(int i=n-1;(i>=0)&&(a[i]==a[n-1]);i--)
        count++;
    cout<<count<<endl;
    return 0;
}
