#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"Enter The Numbers: ";
    cin>>a;
    cout<<"Enter The Numbers: ";
    cin>>b;
    bool flag =  true;
    if(b<0){
        flag = false;
        b = -b;
    }
    float power = 1;
    for(int i = 1; i <= b ; i ++){
        power *= a;
    }
    if(flag == false){
        power  = 1/power;
        b = -b;
    }
    if(a == 0 & b == 0) cout<< "Not defined";
    else cout<<power;
    
}