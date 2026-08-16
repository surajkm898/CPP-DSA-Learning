#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"enter your number : ";
        cin >> n;
        for(int i=2;i<=(n-1);i++){
            if(n%i ==0){ cout<<"not a prime number "; break;} 
            else {cout<<"prime number "; break;}
        }
}