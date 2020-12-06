#include<bits/stdc++.h>

using namespace std;
int main(){
	int s = 0;
	int Grid [2][3] = {{1,0,1},{-8,9,-2}};
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                s = s + Grid[i][j];
            }
        }
        return s;
}

