#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cout << " enter your numer " ;
    cin>> n;
    for (int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(n != n/i)cout<<n/i<<" ";
        }
    }
}