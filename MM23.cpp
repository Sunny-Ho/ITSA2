//挑中位數，算到個點的距離
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;

void sort(int x[],int size){
    int i,j,tmp;
    for(i=1 ; i<=size ; i++){
        for(j=1 ; j<=size ; j++){
            if(x[i] < x[j]){
                tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
        }
    }
}

int main(){
    int nd,np,center,tot,distence;
    int i,j;
    int number[501],buf[1000];
    cin >> nd;
    for(i=0 ; i<nd ; i++){
        cin >> np;
        for(j=1 ; j<=np ; j++){
            cin >> number[j];
        }
        sort(number,np);
        if(np % 2 == 0)
            center = np / 2;
        else
            center = (np / 2) + 1;
        tot = 0;
        for(j=1 ; j<=np ; j++){
            distence = number[center] - number[j];
            if(distence < 0)
                distence *= -1;
            tot = tot + distence;
        }
        buf[i] = tot;
    }
    for(i=0 ; i<nd ; i++)
        cout << buf[i] << endl;
    return 0;
}
