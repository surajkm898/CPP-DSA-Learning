#include <iostream>
using namespace std ;
void thar(){
 cout<<"hay hay";
}
void sec(){
    thar();
    cout<<" hoe ar you"<<endl;
}
void fis(){
    cout<<" hello"<<endl;
    sec();
}
int main(){
    fis();
}
