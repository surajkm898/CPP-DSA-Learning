#include <iostream>
using namespace std;
void change(int* ptr){
    *ptr =10;
}
int main (){
    int a =344;
    cout <<"befor :"<<a<<endl;
    change(&a);
    cout <<"after " <<a;
}