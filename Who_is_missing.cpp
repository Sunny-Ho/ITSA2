#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
#include <ctype.h>

using namespace std;
#define Max 800000

int main(){
	int len,i,tmp,cnt=0;
	char line[Max] = {'\0'};
	int num[Max] = {0},ans[Max]= {0};
	char *ptr;
	cin >> len;
    getchar(); //換行

    fgets(line,Max,stdin);
	ptr = strtok(line," ");
	while(ptr != NULL){
		tmp = atoi(ptr);
		num[tmp] = 1;
		ptr = strtok(NULL," ");
	}
    //cout << num[0] << endl;
	for(i=1 ,cnt = 0 ; i<=len ; i++){
		if(num[i] == 0){
			ans[cnt] = i;
			cnt++;
		}
	}
	for(i=0 ; i<cnt ; i++){
		if(i==cnt-1){
			cout << ans[i] << endl;
			break;
		}
		else cout << ans[i] << " ";
	}
	for(i=0 ; i<Max ; i++){
		ans[i] = 0;
		num[i] = 0;
	}
	return 0;
}
