#include<bits/stdc++.h>

using namespace std;

/* vector are used because we have a limitation in array that 
	we need to knoow the size of an array before we create it*/

int main(){
	vector <int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
	
	return 0;
}
