#include<bits/stdc++.h>

using namespace std;

/* vector are used because we have a limitation in array that 
	we need to knoow the size of an array before we create it*/

int main(){
	vector <int> v {10,20,30,40,50};  // initialization
//	vector <char> v {'a','b'};
//	vector <string> v {"raj", "rahul"};
	for(auto x:v)
		cout << x << " ";
		
	return 0;
}
