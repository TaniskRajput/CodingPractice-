// Online C++ compiler to run C++ program online
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> arr ={5,4,5,6,8,4};
    int count = 0;
    for(int i=0;i<arr.size()-1;i++){
        for(int j = 0  ; j<arr.size()-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
        }
    for(int i = 0 ;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Total number of swaps: "<<count;
    return 0;
}
int swap(int &x ,int &y){
    int temp = x;
     x = y;
     y = temp;
}