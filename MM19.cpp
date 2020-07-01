//找min表面積極體積的最大公因數 
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;


int gcd(int a, int b){
    int c;

    while (a != 0){
        c = a;
        a = b%a;
        b = c;
    }
    return b;
}

int main(){
    double min = (double)INT_MAX;
    int min_sur = 0, min_vol = 0;
    int cases,divisor;
    cin >> cases;

    while(cases--){
        int height, width, depth;
        cin >> height >> width >> depth;
        int volume, surface;
        volume = height*width*depth;
        surface = 2*(height*width + width*depth + height*depth);
        double record;
        record = (double)surface / (double)volume;
        if(record < min){
            min = record;
            min_sur = surface;
            min_vol = volume;
        }

    }
    //cout << min_sur << " " << min_vol << endl;
    divisor = gcd(min_sur, min_vol);
    //cout << divisor << endl;
   cout << min_sur/divisor << " "<< min_vol/divisor << endl;

    return 0;
}
