#include <bits/stdc++.h>
using namespace std;
struct edge{
  int u;
  int v;
  int w;
};
int main(){
  int n,e;
  cin>>n>>e;
  int vis[e];
  memset(vis,0,sizeof(vis));
  edge g[e];
  for(int i=0;i<e;i++){
    cin>>g[i].u>>g[i].v>>g[i].w;
  }
  for(int i=0;i<e;i++){
    for(int j=0;j<=e-j;j++){
      if(g[j].w>g[j+1].w){
        swap(g[j].u,g[j+1].u);
        swap(g[j].v,g[j+1].v);
        swap(g[j].w,g[j+1].w);
      }
    }
  }
  for(int i=0;i<e;i++){
    int cu=g[i].u,cv=g[i].v;
    if(vis[cu] && )
  }
  return 0;
}
