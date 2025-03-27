#include<iostream>
using namespace std;
int max(int a , int b , int c){
    if(a > b && b >c) {
        return a ;
    }
    else if ( b > a && b > c) {
        return b ;
    }
    else return c;

}
int main(){
    int a;
    cout<< "Enter : ";
    cin>> a;
    int b;
    cout<< "Enter : ";
    cin>> b;    
    int c;
    cout<< "Enter : ";
    cin>> c;
    cout<<max(a,b,c);
}