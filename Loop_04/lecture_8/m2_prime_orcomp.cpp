#include <iostream>
#include <cmath>
using namespace std ;
int main (){
    int n;
    cout <<"enter your number ";
 cin >>n;   
    bool flag = false; //let a flase me prime
    for (int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag =true ;
            // break;
        }
    }
     if(n == 1) cout << " nor com or not a prime ";
      else if (flag==true) cout <<"com number";
    else cout <<" prime number ";
}