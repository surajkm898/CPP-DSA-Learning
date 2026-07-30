#include <iostream>
using namespace std;
void swap(int n,int y){
    int temp =n;
    n =y;
    y =temp;
}
int main (){
    int x=5,y=4;
    swap(x,y);
}