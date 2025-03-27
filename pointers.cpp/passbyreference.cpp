#include<iostream>
using namespace std;
void swap(int* x, int* y ){
    int temp;
    temp = *x;
    *x = *y;
    *y= temp;
    return;
}
int main(){
    int a;
    cout<< "Enter : ";
    cin>> a;
    int b;
    cout<< "Enter : ";
    cin>> b;
    swap(&a,&b);
    cout<<a<< " "<<b;
    
}