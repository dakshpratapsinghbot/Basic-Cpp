#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i = 1;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }cout<<max;

}