#include <iostream>
using namespace std;
int main (){
    int n ,m = 0;
    cout <<" Enter your Arrays Size : ";
    cin >>n;
    int x[n];
    for(int i=0;i<=n-1;i++){
        cin>>x[i];
    }
    for(int i=0;i<=n-1;i++){
        m += x[i];
    }
    cout <<m;
}