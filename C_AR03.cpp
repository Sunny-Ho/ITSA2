//立方和
#include <iostream>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;

int main(){
    float a,b,c,d,e,f;
	cin >> a >> b >> c >> d >> e >> f;
	double ans=0.0;
	ans = ans + pow(a,3);
	ans = ans+ pow(b,3);
	ans = ans+ pow(c,3);
	ans = ans+ pow(d,3);
	ans = ans+ pow(e,3);
	ans = ans+ pow(f,3);
	cout << ans << endl;
	return 0;
}