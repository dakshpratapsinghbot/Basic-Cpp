#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter : ";
    cin>>n;
    for (int i = 1; i<=n ; i++){
        for(int j = 1;j<=i ; j++){
            cout<<(char)(i+64)<<" " ;
        }cout<<endl;
    }

} 