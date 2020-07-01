//N jobs M machines
//N jobs to be processed by M machines
#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;  

int  n,m;  
priority_queue< int ,vector <int> ,greater<int> > pq;  
int ini(){  
    for(int i=0;i<m;i++) pq.push(0);  
}  
int main(){  
    int t;  
    //scanf("%d",&t);  
    //while(t--)  
    //{  
        cin >> n >> m;  
        ini();  
        int mx = -1;  
        for(int i=0 ; i<n ; i++){  
            int x; 
			cin >> x;  
            int mini = pq.top();  
            pq.pop();  
            mini += x;  
            mx = max(mini,mx);  
            pq.push(mini);  
        }  
        cout << mx << endl;  
    //}  
}  
