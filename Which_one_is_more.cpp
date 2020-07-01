#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
#include <ctype.h>

using namespace std;

int main(){
    int i, j;
    int row, column;
    int student, boy = 0, girl = 0;
    while(cin >> row >> column){
        for(i = 0; i < row; i++){
            for(j = 0; j < column; j++){
                cin >> student;
                if(student == 0){
                    girl++;
                }
                else if(student == 1){
                    boy++;
                }
            }
            getchar();
        }

        if(girl > boy){
            cout << "0" << endl;
        }
        else if(boy > girl){
            cout << "1" << endl;
        }
        else if(boy == girl){
            cout << "2" << endl;
        }
    }

    return 0;
}
