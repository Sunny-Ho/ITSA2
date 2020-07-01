//陣列反轉
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
#include <ctype.h>

using namespace std;

int main(){
	stack <int> s;
    char line[1024];
    char *ptr;
    memset(line,0,1024);
    while(fgets(line,1024,stdin) != NULL){
        ptr = strtok(line," ");
        while (ptr != NULL)
        {
            int tmp = atoi(ptr);
            s.push(tmp);
            ptr = strtok(NULL," ");
        }
        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
        
    }
	return 0;
}
