//三角形
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;
int n;
vector <int> a;

void check(){
    for(int i = 0 ; i< n;i++)
        for(int j = i+1 ; j< n;j++)
            for(int k = j+1 ; k< n;k++){
                if((a[i]+a[j]) > a[k]) cout << a[i] << " " << a[j] << " "<< a[k] <<endl;
            }
}
int main(){
    cin >> n;
    for(int i =0; i <n;i++){
        int x; 
		cin >> x; 
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    check();
    return 0;
}
