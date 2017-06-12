#include <bits/stdc++.h>
using namespace std;

struct Crate{
    int boxes;
    int sticks;
};

bool compare(Crate n1,Crate n2)
{
  return n1.sticks>n2.sticks; 
}

int main() {
    int c;
    long long n;
    cin>>n>>c;
    Crate cr[c];
    for(int i=0;i<c;i++){
        cin>>cr[i].boxes>>cr[i].sticks;
    }
    sort(cr,cr+c,compare);
    
    long long tn=n,ans=0;
    for(int i=0;tn>0;i++){
        if(tn>=cr[i].boxes)
        ans+=cr[i].sticks*(cr[i].boxes);
        else
            ans+=cr[i].sticks*tn;
        tn-=cr[i].boxes;
    }
    cout<<ans<<endl;
    return 0;
}
