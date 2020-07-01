//3*3array

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
	vector <int> a;
	int i,j;
	for(int i = 0 ; i < 9; i++){
        int x;
        cin>>x; a.push_back(x);
    }

	//for(i=0 ; i<9 ; i++) cout << a[i] << endl;
    //cout << "---------------";
	sort(a.begin(),a.end());
	for(i=0 ; i<9 ; i++) cout << a[i] << endl;
	cout << a[0]+a[1]+a[2] << endl;
	return 0;
}
