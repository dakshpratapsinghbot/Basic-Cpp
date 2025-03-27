#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> num = {5,6,2,3,56,4,5,6,2};
    for(int i = 0; i<num.size();i++){
        cout<<num[i];
    }
    cout<<endl;
    cout<<num[5]<<endl;
    cout<<num.front()<<endl;
    cout<<num.back()<<endl;
    cout<<num.at(4)<<endl;
    num.at(2) = 8;
    num.push_back(6);
    num.push_back(1);
    num.push_back(89);
    num.push_back(6156);
    num.push_back(6123);
    num.pop_back();
     for(int i = 0; i<num.size();i++) cout<<num[i]<<" ";
}   