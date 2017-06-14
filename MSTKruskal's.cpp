#include<bits/stdc++.h>
using namespace std;
struct edge{
  int start;
  int end;
  int weight;
};

int findParent(int vertex, int parent[]){
  return parent[vertex];
}

void Union(int st,int en,int parent[]){
  if(st==en)
    return ;
  if((parent[st]!=st) ^ (parent[en]!=en))
    Union(parent[st],en,parent);
  parent[st]=parent[en];
  return ;
}

bool compare(edge e1,edge e2){
  return e1.weight<e2.weight; //function for sorting the edges according to weights
}
int main(){
    int num_of_vertices,num_of_edges,minWeight=0;
    cin>>num_of_vertices>>num_of_edges;
    edge Edge[num_of_edges];
    for(int i=0;i<num_of_edges;i++){
      cin>>Edge[i].start>>Edge[i].end>>Edge[i].weight;
    }
    int parent[num_of_vertices+1];
    for(int i=1;i<=num_of_vertices;i++){
      parent[i]=i;
    }
    sort(Edge,Edge+num_of_edges,compare);
    for(int i=0;(i<num_of_edges);i++){
      int s=findParent(Edge[i].start,parent),e=findParent(Edge[i].end,parent);
      if(s!=e)
      {
          Union(Edge[i].start,Edge[i].end,parent);
          minWeight+=Edge[i].weight;
      }
    }
    cout<<minWeight<<endl;
  return 0;
}
