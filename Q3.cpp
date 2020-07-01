//平方和 判斷是否在園內

#include <iostream>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;

int main(){
	float a,b,tmp = 0.0;
	while(cin >> a >> b){
		tmp = pow(a,2);
		//printf("%.1f",tmp);
		tmp = tmp + pow(b,2);
		if(tmp >= 10000) cout << "outside" << endl;
		else cout << "inside" << endl;
		a = 0; b = 0;tmp = 0;
	}
	return 0;
}
