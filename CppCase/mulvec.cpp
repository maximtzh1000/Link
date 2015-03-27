#include <vector>
using namespace std;

vector<int> mulvec(vector<int>& a, vector<int>& b){
	vector<int> c(a.size(),0);
	for(int i=0;i<a.size();i++){
		c[i]=a[i]*b[i];
	}
	return c;
} 