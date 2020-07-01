//01010000 00000001 81
//兩個８bit二進位數相加 輸出十進位
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    char line[50] = {'\0'};
	char n;
    int i,ans,runcnt,run=0,bitcnt=0,cnt=0;
    int bit[50][10],op1=0,op2=0,degree;

    cin >> runcnt;
    while(run < runcnt){
        bitcnt=0;cnt=0;
        op1 =0; op2 = 0;
        ans =0 ;
        fgets(line,50,stdin);
        line[strlen(line)-1] = '\0';
        for(i=0;line[i]!='\0';i++){
            n = line[i];
            if(n == ' '){
                bitcnt++;
                cnt = 0;
                continue;
            }
            bit[bitcnt][cnt] = n-'0';
            cnt++;
        }
        for(i=cnt-1;i>=0;i--){
            degree = (cnt-(i+1));
            op1 = op1 + (bit[0][i]*pow(2,degree));
            op2 = op2 + (bit[1][i]*pow(2,degree));
        }
        ans = op1+op2;
        cout << ans << endl;
        run++;
    }
    return 0;
}
