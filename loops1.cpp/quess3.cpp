#include<iostream>
using namespace std;
int main(){
      int n;
    cout<<"Enter a Number : ";
    cin>>n;
    
    int last = 0;
    int r = 0;
    while (n>0){
        r = r*10;
        last = n%10;
        r += last;
        n/=10;
    }
    cout<<r;
}