  #include <bits/stdc++.h>
  using namespace std;
  int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
      int m,x=0,y=0;
      cin>>m;
      while(m>0){
        m--;
        x++;
        if((m-2)>=0){
          y+=2;
          m-=2;
        }
        else if((m-1)>=0){
          y++;
          m--;
        }
      }
      cout<<x<<" "<<y<<endl;
    }
    return 0;
  }
