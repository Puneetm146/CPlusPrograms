#include<vector>
#include<iostream>

using namespace std;

/* vector are used because we have a limitation in array that 
	we need to knoow the size of an array before we create it*/

int main(){
	int n = 10;
	vector <int> v(n,5);
	for(auto x:v)
		cout << x << " ";
	
	return 0;
}
