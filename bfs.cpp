#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,e,a,b,start;
	cin >> n >> e;
	vector <int> adj_list[n+1];
	for(int i=0;i<e;i++){
		cin >> a >> b;
		adj_list[a].push_back(b);
		adj_list[b].push_back(a);
	}
	queue <int> q;
	cin >> start;
	q.push(start);
	int u,v;
	vector <int> vis(n+1,0);
	vis[start]=1;
	while(!q.empty())
	{
		u = q.front();
		q.pop();
		cout << u << " " ;
		for(int i=0;i<adj_list[u].size();i++){
			v = adj_list[u][i];
			if(!vis[v]){
				vis[v] = 1;
				q.push(v);
			}
		}
	}
	return 0;
}
