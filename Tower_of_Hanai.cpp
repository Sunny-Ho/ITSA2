#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
#include <ctype.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int c = 1;
    for(int i = 0;i<n;i++)
        c*=2;
    cout << c-1 << endl;
    return 0;
}
