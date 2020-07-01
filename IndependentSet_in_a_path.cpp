#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

using namespace std; 

int main(){  
    int n;  
    while(1)  {  
        cin>>n;
        if(!n) return 0;  
        int max1 = 0, max2 = 0;  
        for(int i=0 ; i<n ; i++)  {  
            int a;
            cin>>a;
            int t1,t2;  
            t1 = max2 + a;  
            t2=max(max1,max2);
            //cout <<"t1=" << t1 <<" t2=" <<t2 <<endl;

            max1 = t1;  
            max2 = t2;  
        }  
        cout<<max(max1,max2)<<endl;  
    }  
    return 0;  
}  
