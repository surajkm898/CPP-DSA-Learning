#include <iostream>
using namespace std;
int main () {
    int a[] ={10,20,50,70};
    int b[] ={30,40,60,80,90};
    int m = sizeof(a)/4, n =sizeof(b)/4;
    int c[m + n];
    int i=0 ,j=0,k=0;
    while(i<m && j<n){
        if(a[i] > b[j]){
            c[k] =b[j];
            k++;
            j++;
        } else{
        c[k]=a[i];
        k++;
        i++;
    }
    }
    
    while (i<m){
        c[k++]=a[i++];
    }
    
    while (j<n){
        c[k++]=b[j++];
    }
    
    for(int p=0;p<m+n;p++){
        cout <<c[p]<<" ";
    }
   
}

