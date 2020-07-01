//BMI

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double hip,height,bai;
    //while(scanf("%lf %lf",&hip,&height) == 2){
    while ( cin >> hip >> height)
    {
        
		bai = hip / pow(height,1.5) -18;
		if(bai > 40) cout << "morbidly obese\n";
		else if (bai > 30) cout << "obese\n";
		else if(bai > 25) cout << "overweight\n";
		else if(bai > 18.5) cout << "healthy\n";
		else cout << "underweight\n";
	}
    return 0;
}