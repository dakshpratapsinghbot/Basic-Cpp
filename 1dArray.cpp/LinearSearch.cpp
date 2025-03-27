#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i = 0; i < n;i++){
    //     cout<<arr[i];
    int r;
    cout<<"Enter the element you wants to search: ";
    cin>>r;
    // bool key = false;
    // for(int i = 0 ; i<n; i++){
    //     if(arr[i] == r ) key = true;
    // }
    // if (key == true) cout<< "Present";
    // else cout <<"Error";
    // return 0;
    for(int i = 0; i < n;i++){
        if(r==arr[i]){
            cout<<i;
        }
    if(i==n) cout<<"not found";
    }
}