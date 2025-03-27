#include<iostream>
using namespace std;
void ShellSort(int arr[],int n){
    int gap;
    for(gap = n/2 ;gap>0;gap/=2){
        for(int i = gap;i<n;i++){
            int temp = arr[i];
            int j;
            for(j=i;j>=gap&&arr[j-gap]>temp;j = j-gap){
                arr[j] = arr[j-gap];
            }
            arr[j] = temp;
        }
    }

}
void PrintSort(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter N: "<<endl;
    cin>>n;    
    int arr[n];
    cout<<"Enter the Array: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original Array: "<<endl;
    PrintSort(arr,n);

    ShellSort(arr,n);
    
    cout<<endl<<"Sorted Array: "<<endl;
    PrintSort(arr,n);
    
}