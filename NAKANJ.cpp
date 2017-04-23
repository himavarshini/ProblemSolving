#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,-1,1,1,-2,-2,2,2};
int dy[]={-2,-2,2,-2,1,-1,1,-1};
int main()
{
  int n,l,m,x1,y1,x2,y2;
  string s1,s2;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s1;
    cin>>s2;
    x1=s1[0]-'a';
    y1=s1[1]-'1';
    x2=s2[0]-'a';
    y2=s2[1]-'1';
    pair<int,int> p = make_pair(x1,y1);
    int vis[9][9];
    memset(vis,0,sizeof(vis));
    vis[x1][y1]=1;
    queue <pair<int,int> > q;
    q.push(p);
    while(!q.empty()){
      pair<int,int> z=q.front();
      q.pop();
      x1=z.first;
      y1=z.second;
  //  cout<<x1<<" "<<y1<<endl;
      if((x1==x2) && (y1==y2)){
        cout<<(vis[x1][y1])-1<<endl;
        break;
       }
      else{
      for(int k=0;k<8;k++){
        if(((x1+dx[k])>=0)&&((x1+dx[k])<8)&& ((y1+dy[k])<8)&&((y1+dy[k])>=0)&&(vis[x1+dx[k]][y1+dy[k]]==0)){
             int d=x1+dx[k];
             int f=y1+dy[k];
             p=make_pair(d,f);
             q.push(p);
             vis[x1+dx[k]][y1+dy[k]]=vis[x1][y1]+1;
           }
          }
        }
      }
    }

return 0;
}
