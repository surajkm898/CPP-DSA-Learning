#include <iostream>
using namespace std;
int far(int n){
    int a=1;
    for (int i=1;i<=n;i++){
        a *=i;
    }
        return a;
}
int npr(int n, int r){
    int a = far(n)/(far(r)*far(n-r));
}
int main (){
    cout<<npr(23 ,2);
}