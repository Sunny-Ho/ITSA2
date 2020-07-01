// A sequence of n > 0 integers is called a jolly jumper if the absolute values of the difference between successive elements take on all the values 1 through n-1. 
//For instance, 1 4 2 3 is a jolly jumper
// 4 1 4 2 3
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;

int main(){
    int n;
    int jolly[3500];
    bool jollyp = 1;

    while(cin >> n){
        bool jump[3500] = {0};
        jollyp = 1;
        for( int i = 0 ; i < n ; i++ ){
            cin >> jolly[i];
        }

        for( int i = 1 ; i < n ; i++ ){
			//界在1~n 中間沒空(jump)
            if((abs(jolly[i] - jolly[i-1]) >= n )|| (abs(jolly[i] - jolly[i-1]) <= 0 )|| (jump[abs(jolly[i] - jolly[i-1])] )){
                jollyp = 0;
                break;
            }
            jump[abs(jolly[i] - jolly[i-1])] = 1;
        }

        if(jollyp){
            cout << "Jolly" << endl;
        }
        else{
            cout << "Not jolly" << endl;
        }
    }
    return 0;
}
