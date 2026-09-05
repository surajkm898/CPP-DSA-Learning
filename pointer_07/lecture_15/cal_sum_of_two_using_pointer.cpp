#include <iostream>
using namespace std;
int sum(int* aptm, int* bptm){
    int c = *aptm+*bptm ;
    return c;
}
int main (){
    int a =10 ,b =3;
     cout<<sum(&a,&b);
}