#include<bits/stdc++.h>
using namespace std;

class SkiResortsEasy {
public:
	int minCost(vector <int> altitude) {
		int c=0;
		for(int i=0;i<(altitude.size()-1);i++){
			if(altitude[i]<altitude[i+1]){
				c+=(altitude[i+1]-altitude[i]);
			}
		}
		return c;
	}
};
