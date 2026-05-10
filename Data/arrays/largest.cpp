#include<iostream>
using namespace std;
//int arr[10^6] max size.
int main(){
    int arr[]={1,3,4,46,5,6};
    int n = 5;
    int lar=arr[0];
    for(int i = 0;i<6;i++){
            if(arr[i]>lar){
                lar=arr[i];
        }
    }
    cout<<lar;
}
// void swap(int &x,int &y){
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
// }