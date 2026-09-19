#include<iostream>
using namespace std;
void change (int y[]){
    y[0] = 20;
}
int main (){
    int x[] ={23,56,48,57};
    change(x);
    cout<<x[0]<<endl;
}