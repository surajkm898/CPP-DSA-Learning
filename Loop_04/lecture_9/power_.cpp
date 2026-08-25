#include <iostream>
using  namespace std;
int main (){
    int n =4 , m =2;
    int ans =1;
    for (int i=1;i<=m;i++){
        if(n==1) break;
        ans *= n;
    }
    cout <<ans;
}