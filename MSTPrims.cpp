#include <bits/stdc++.h>
using namespace std;
struct edge{
  int u;
  int v;
  int w;
};

int main(){
  int n,e,dis=0;
  cin>>n>>e;
  int vis[n+1];
  memset(vis,0,sizeof(vis));
  edge g[e];
  for(int i=0;i<e;i++){
    cin>>g[i].u>>g[i].v>>g[i].w;
  }
  for(int i=0;i<e;i++){
    for(int j=0;j<e-j;j++){
      if(g[j].w>g[j+1].w){
        swap(g[j].u,g[j+1].u);
        swap(g[j].v,g[j+1].v);
        swap(g[j].w,g[j+1].w);
      }
    }
  }
vis[g[0].u]=1;
  for(int i=0;i<e;i++){
    for(int j=0;j<e;j++ ){
      int cu = g[j].u, cv=g[j].v;
    if((vis[cu]==1 || vis[cv]==1) && (vis[cu]!= vis[cv])){
      dis+=g[j].w;
      vis[cu]=1;vis[cv]=1;
        j=0;
      }
    }
   }
  cout<<dis<<endl;
  return 0;
}
