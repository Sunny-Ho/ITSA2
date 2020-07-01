//The output consists of 26 lines, 
//and each line has the number of times that letter appears in the string.
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
#include <ctype.h>

using namespace std;

int main(){
	int i;
	char line[1024];
	memset(line,'\0',sizeof(line));
	char x;
	int tmp,cnt[26] = {0};
	while(fgets(line,1024,stdin)){
        line[strlen(line)-1] = '\0';
		for(i=0 ; i<strlen(line) ; i++){
			x = line[i];
			tmp = isalpha(x);
			if(tmp != 0){
				x = tolower(x);
				int idx = x - 'a';
				cnt[idx] ++;
			}
		}
		for(i=0 ; i<26 ; i++){
			cout << cnt[i];
		}
	}
	return 0;
}
