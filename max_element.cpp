#include<bits/stdc++.h>

using namespace std;

int main(){
	
	vector <int> v {10,20,100,40,50,500};
	int max;
	
	for(int i=0; i<v.size(); i++){
		for(int j=0; j<v.size(); j++){
			if(v[i] > v[j]){
				max = v[i];	
			}
		}
	}
	
//	max = *max_element(v.begin(),v.end());	
	
	cout << "max element " << max << endl;
	
	return 0;
}
