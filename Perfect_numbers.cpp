#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;

int main(){
	int cnt,ans,i;
	long long num;
	long long perfectnum[7] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};
	scanf("%d",&cnt);
	while(cnt--){
		scanf("%lld",&num);
		ans = 0;
		for(i=0 ; i<7 ; i++){
			if(num == perfectnum[i])
				ans = 1;
		}
		if(ans) cout << "perdect\n";
		else{
			cout <<"nonperfect\n";
		} 
	}
	return 0;
}