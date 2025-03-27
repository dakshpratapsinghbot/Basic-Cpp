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
    int r;
    cout<<"Enter the element: ";
    cin>>r;
    int count = 0;
    for(int i = 0; i<n;i++){
        if(r<arr[i]){
            count++;
        }
    }cout<<count;
}