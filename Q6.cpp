//季節判斷

#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;

int main(){
	int num;
	while(cin >> num){
		if(3 <= num && num <= 5) cout << "Spring" << endl;
		else if(6 <= num && num <= 8) cout << "Summer" << endl;
		else if(9 <= num && num <= 11) cout << "Autumn" << endl;
		else cout << "Winter" << endl;
	}
	return 0;
}
