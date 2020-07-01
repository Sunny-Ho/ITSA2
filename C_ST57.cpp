//迴文
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;

int main(){
	char line[10000] = {'\0'},tmp[10000] = {'\0'};
	while(fgets(line,10000,stdin) != NULL){
		if(line[strlen(line) -1] == '\n') line[strlen(line) -1] = '\0';
		for(int i=0 ; i<strlen(line) ; i++){
			tmp[i] = line[strlen(line)-i-1];
		}
		//printf("%s\n",line);
		//printf("%s\n",tmp);
		if(strcmp(tmp,line) == 0) cout << "yes\n";
		else cout << "no\n";
		memset(line,'\0',sizeof(line));
		memset(tmp,'\0',sizeof(tmp));
	}
	return 0;
}
