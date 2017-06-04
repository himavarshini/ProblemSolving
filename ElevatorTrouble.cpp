#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int f,g,u,s,d;
	cin>>f>>s>>g>>u>>d;
	vector<long int> a[f+1];
	for(int i=1;i<=f;i++){
		if((i-d) >= 1)
			a[i].push_back(i-d);
		if((i+u) <= f)
			a[i].push_back(i+u);
	}	
	queue <long int> q;
	long int c,v;
	q.push(s);
	vector<long int>vis(f+1,0);
	vector<long int>dis(f+1,2*f);
	vis[s]=1;
	dis[s]=0;
	if(s==g)
		cout<<"0"<<endl;
	else{
		while(!q.empty())
		{
			c=q.front();
			q.pop();
			for(int i=0;i<a[c].size();i++)
			{
				v = a[c][i];
				if(!vis[v])
				{
					vis[v] = 1;	
					if(dis[v] > (dis[c]+1))
						dis[v]=dis[c]+1;
					q.push(v);
				}
				if(vis[g])
				{
					cout<<dis[g]<<endl;exit(0);
				}
		}
	}
	if(dis[g] == (2*f))
		cout<<"use the stairs"<<endl;}
	return 0;
}

