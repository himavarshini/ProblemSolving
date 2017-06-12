#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n,xt,yt,t1,t2;
    cin>>xt>>yt>>n;
    for(int i=0;i<n;i++){
      cin>>t1>>t2;
      xt-=t1;
      yt-=t2;
    }
    cout<<xt<<" "<<yt<<endl;
    return 0;
}
