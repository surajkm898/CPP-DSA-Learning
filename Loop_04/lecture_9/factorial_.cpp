#include <iostream>
using  namespace std;
int main (){
    int n =4;
    int fac =1;
    for (int i=1;i<=n;i++){
        fac *=i;
    }
    cout<<fac;
}