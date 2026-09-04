#include <iostream>
using namespace std;
int main (){
    int n , b=1;
    cout <<"enter your number ";
    cin>> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout <<b<<" ";
            b++;
        }
        cout<<endl;
    }
}