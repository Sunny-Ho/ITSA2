//英里轉公里
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;

int main(){
	int num = 0;
	double tmp = 0.0;
	while(cin >> num){
		tmp = num *1.6;
		cout << tmp << endl;
		tmp = 0.0;
	}
	return 0;
}
