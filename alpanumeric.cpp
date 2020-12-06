#include<bits/stdc++.h>

using namespace std;

int main(){
	string str = "1abc24";
	string temp = "";
	int s = 0;
	
	for(char ch : str){
		if(isdigit(ch)){
			temp += ch;
		}else{
			s += atoi(temp.c_str());
			temp = "";
		}
	}
	
	cout << s+atoi(temp.c_str());
	
}
