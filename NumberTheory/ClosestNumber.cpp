#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long a,b,x,res,temp1,temp2;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>x;
        res=pow(a,b);
        temp1=res-(res%x); 
        temp2=res+(x-(res%x));   
        if((x-(res%x))>=(res%x))          
          cout<<temp1<<endl; 
        else
          cout<<temp2<<endl;
    }
    return 0;
}
