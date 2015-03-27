#include <iostream>
#include "vectorop.h"

int main(){
	vector<int> a;
	vector<int> b;
	vector<int> c;
	a.push_back(1); a.push_back(2);
	b.push_back(3); b.push_back(4);
	c=mulvec(a,b);
	for(int i=0;i<c.size();i++)
		cout<<c[i]<<endl;
	return 0;
}