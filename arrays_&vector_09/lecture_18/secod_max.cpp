#include <iostream>
#include <climits>
using namespace std;
int main (){
    int n ,m = INT_MIN; 
    int x[] ={2,4,6,8,9};
    n = sizeof(x)/4;
    int se = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(x[i]>m){  
            m =x[i];
        }
    }
    for(int i=0;i<=n-1;i++){
        if(x[i]>se && x[i]!=m){ 
            se =x[i];
        }
    }
    cout <<se;
}