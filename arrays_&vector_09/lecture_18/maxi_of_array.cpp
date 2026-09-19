#include <iostream>
#include <climits>
using namespace std;
int main (){
    int n ,m = INT_MIN; // m2 >fist element of array
    cout <<" Enter your Arrays Size : ";
    cin >>n;
    int x[n];
    for(int i=0;i<=n-1;i++){
        cin>>x[i];
    }
    for(int i=0;i<=n-1;i++){
        if(x[i]>m){   //m2 if(x[i]>max) m =arr[i]
            m =x[i];
        }
    }
    cout <<m;
}