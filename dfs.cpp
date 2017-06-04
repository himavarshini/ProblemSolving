#include<bits/stdc++.h>
using namespace std;
void DFS(vector<int> adj_list[],bool * vis,int u){
  for(int i=0;i<adj_list[u].size();i++){
    int v=adj_list[u][i];
    if(!vis[v]){
      vis[v]=true;
      DFS(adj_list,vis,v);
    }
  }
  cout<<u<<" ";
}
int main(){
  int num,edges,a,b,start;
	cin >> num >> edges;
	vector <int> adj_list[num+1];
	for(int i=0;i<edges;i++){
		cin >> a >> b;
		adj_list[a].push_back(b);
		adj_list[b].push_back(a);
	}
  bool *vis=new bool[num];
  for(int j=0;j<num;j++){
    if(!vis[j]){
      vis[j]=true;
      DFS(adj_list,vis,j);
    }
  }
return 0;
}
