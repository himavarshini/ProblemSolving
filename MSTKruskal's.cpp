#include<bits/stdc++.h>
using namespace std;
struct edge{
  long long start;
  long long end;
  long long weight;
};

long long findParent(long long vertex, long long parent[]){
  if(parent[vertex]==vertex)
  return parent[vertex];
  return findParent(parent[vertex],parent);
}

void Union(long long st,long long en,long long parent[]){
  if(parent[st]!=st)
    parent[parent[st]]=en;
  parent[st]=parent[en];
  return ;
}

bool compare(edge e1,edge e2){
  return e1.weight<e2.weight; //function for sorting the edges according to weights
}
int main(){
    long long num_of_vertices,num_of_edges,minWeight=0,count=0;
    cin>>num_of_vertices>>num_of_edges;
    edge Edge[num_of_edges];
    for(int i=0;i<num_of_edges;i++){
      cin>>Edge[i].start>>Edge[i].end>>Edge[i].weight;
    }
    long long parent[num_of_vertices+1];
    for(int i=1;i<=num_of_vertices;i++){
      parent[i]=i;
    }
    sort(Edge,Edge+num_of_edges,compare);
    for(int i=0;(i<num_of_edges);i++){
      long long s=findParent(Edge[i].start,parent),e=findParent(Edge[i].end,parent);
      if(s!=e)
      {
          count++;
          Union(Edge[i].start,Edge[i].end,parent);
          minWeight+=Edge[i].weight;
      }
      if(count>num_of_vertices)
      {
        break;
      }
    }
    cout<<minWeight<<endl;
  return 0;
}
