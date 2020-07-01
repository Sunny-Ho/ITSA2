//1 有幾個......
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;
int main(int argc, const char * argv[]) {  
    int n,i,j,k,temp,temp1,d;  

        int a[200]={0},b[200][2]={0};  
        int count = -1;  
        for(j=0;j<100;j++)  
        {  
            cin>>a[j];
            count++;  
            if(a[j]==-999) break;  
        }  
        for(j=0;j<count;j++)  
        {  
            b[j][0]=a[j];  
            for(k=j;k<count;k++)  
            {  
                if(a[j]==a[k])  
                    b[j][1]++;  
            }  
        }  
        for(j=0;j<count;j++)  
            for(k=j;k<count;k++)  
            {  
                if(b[j][0]<b[k][0])  
                {  
                    temp=b[j][0];  
                    b[j][0]=b[k][0];  
                    b[k][0]=temp;  
                      
                    temp1=b[k][1];  
                    b[k][1]=b[j][1];  
                    b[j][1]=temp1;  
                }  
                if(b[j][0]==b[k][0])  
                {  
                    temp1=b[k][1];  
                    b[k][1]=b[j][1];  
                    b[j][1]=temp1;  
                }  
            }  
        for(j=0;j<count;j++)  
            for(k=j+1;k<count;k++)  
                if(b[j][0]==b[k][0])  
                    b[j][1] = 0;  
        for(j=0;j<count;j++)  
        {  
            if(b[j][1]!=0)  
            {
                cout<<b[j][0]<<" "<<b[j][1]<<endl;

            }  
        }  
        if(i<n-1)
            cout<<endl;
 
    return 0;  
}  
