//如果 n 是奇數 那麼 n=3*n+1
//否則 n=n/2
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
#include <ctype.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,cnt=0;
        cin>>a;
        while(a >= 1)
        {
            cnt++;
            if(!(a%2) && a > 1) a/=2;
            else if(a % 2 && a > 1) a = 3*a+1;
            if(a==1) break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}