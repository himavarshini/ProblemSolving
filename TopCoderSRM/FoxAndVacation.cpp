#include<bits/stdc++.h>
using namespace std;


class FoxAndVacation {
public:
	int maxCities(int total, vector <int> d) {
		sort(d.begin(),d.end());
		int c=0;
		for(int i=0;(i<d.size())&&(total>0);i++){
		if(total>=d[i]){
		total-=d[i];
		c++;
	}
}
	return c;
}
};
