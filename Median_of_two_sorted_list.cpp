//兩個list sort完找中間的
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;


int main(){
    int cnt;
    cin >> cnt;

    while(cnt--){
        int i;
        int num;

        cin >> num;        
        //int *input;
        vector <int> a;  
        a.clear();

        for(i = 0; i < num*2; i++){
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        sort(a.begin(),a.end());  


        cout << a[num];
    }

    return 0;
}
