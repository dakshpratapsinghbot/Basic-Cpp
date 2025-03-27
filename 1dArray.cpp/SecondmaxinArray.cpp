#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    int smax = INT_MIN;

    for(int i = 0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }    
  
    for(int i = 0;i<n;i++){
        if(smax<arr[i]&&arr[i]!=max){
            smax = arr[i];
        }
    }
    cout<<smax;

}