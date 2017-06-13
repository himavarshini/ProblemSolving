#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class ColorfulBricks {
public:
	int countLayouts(string bricks) {
		vector <int> l ;
		int c=0;
		for(int i=0;i<bricks.length();i++){
			if(l.end()!=(find(l.begin(),l.end(),bricks[i]))){
				l.push_back(bricks[i]);
				c++;
			}
			if(c>=3)
				break;
		}
		if(c==1)
			return 1;
		else if(c==2)
			return 2;
		else
			return 0;
	}
};
