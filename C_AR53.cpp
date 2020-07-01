//學生成績排序
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    long long cnt,i,j;
    cin >> cnt;
    long long  a[cnt];
    for(i=0 ; i<cnt ; i++)
		cin >> a[i];
    for(i=0 ; i<cnt ; i++){
		for(j=0 ; j<cnt ; j++){
			if(a[j] > a[j+1]){
				long long tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
    for(i=0 ; i<cnt ; i++){
		cout << a[i] << endl;
	}
    return 0;
}