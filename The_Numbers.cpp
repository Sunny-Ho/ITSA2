//最前面兩個字母重複出現的次數
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
#include <ctype.h>

using namespace std;

char N[1000],M[10000000];  

int main(){  
    long long int len,i,j;  
    while(cin >> N >> M){  
    	len = strlen(M);  
    	int cnt=0;  
    	for(i=0,j=1 ; i<len ; i++,j++){  
        	if(N[0] == M[i] && N[1] == M[j])  
            	cnt++;  
   	 	}  
    	cout << cnt << endl;  
    }  
    return 0;  
}  
