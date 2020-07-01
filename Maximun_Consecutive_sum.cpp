//連續最大子集
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;

int main(){
    int in,tmp = 0,max = 0;
	while(cin >> in){
		tmp = tmp + in;
		if(max < tmp){
			max = tmp;
		}
		if(tmp < 0){
			tmp = 0;
		} 
	}
	cout << max;
	return 0;
}