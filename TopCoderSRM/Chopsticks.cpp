#include <bits/stdc++.h>
using namespace std;

class Chopsticks {
public:
	int getmax(vector <int> length) {
		sort(begin(length),end(length));
		int c=0;
		for(int i=0;i<length.size();i++){
			if(length[i]==length[i+1])
			{
				c++;
				i++;
			}
		}
		return c;
	}
};
