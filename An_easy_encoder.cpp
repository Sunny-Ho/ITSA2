//encode A -> N

#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

int main(){
    char line[10000] = {'\0'};
	char ans[10000] = {'\0'};
    int i,cnt = 0;
	int tmp=0;
    //while(scanf("%lf %lf",&hip,&height) == 2){
    while(fgets(line,10000,stdin) != NULL){
		cnt = 0;
		if(line[strlen(line) -1] == '\n') line[strlen(line) - 1] = '\0';
		for(i=0 ; i<strlen(line) ; i++){
			tmp = isalpha(line[i]);
			if(tmp == 0){
					ans[cnt] = line[i];
					cnt++;
			}
			else if(tmp != 0){
				if(line[i] >= 'A' && line[i] <= 'Z'){
					line[i] = 'A' + (line[i] - 'A' +13)%26;
					ans[cnt] = line[i];
				}
				else{
					line[i] = 'a' + (line[i] - 'a' + 13)%26;
					ans[cnt] = line[i];
				}
				cnt++;
			}
		}
        cout << ans << endl;
        memset(line,'\0',strlen(line));
		memset(ans,'\0',strlen(ans));
    }    
    return 0;
}