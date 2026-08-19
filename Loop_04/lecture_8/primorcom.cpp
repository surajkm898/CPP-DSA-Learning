#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n;
    cout <<"enter your number ";
    cin >>n;
    int count = 0;
    for (int i=1;i<=n;i++){
        if(n%i==0){
            count ++;
        }
    }
    if (count == 1) cout<<" not a com and not a prime";
    else if (count >= 3) {
        cout <<"com number ";
    } else cout <<" prime number ";
}