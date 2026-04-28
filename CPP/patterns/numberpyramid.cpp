#include<iostream>
using namespace std;
int main(){
    int size=5;
    for(int i = 1;i<=size;i++){
        for(int j=1;j<=size-i;j++){
            cout<<" ";
        }
        for(int k = 1 ;k<=2*i-1;k++){
            cout<<k;
        }     
        cout<<endl; 
    }
}