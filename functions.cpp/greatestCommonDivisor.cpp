#include<iostream>
using namespace std;
int gcd(int a , int b){
    int hcf = 1;
    //for (int i = 1 ; i <= min(a,b); i++){





    for (int i = min(a,b) ; i >= 1; i--){ // Better code
        if (a %i==0 && b % i == 0){ // i is common fcator
            hcf = i;
            break;
        }
    }
    return hcf; 
}
int main(){
    int a ;
    cout<<"Enter :";
    cin >>a;
    int b;
    cout<<"Enter :";
    cin >>b;
    cout<<gcd(a,b);
}
