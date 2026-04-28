#include<iostream>
using namespace std;
int main(){
    int size=5;
    for(int i = 1;i<=size;i++){
        int a=i-1;
        for(int k=1;k<=size-i;k++){
            cout<<" ";
        }
        for(int j=1 ;j<=i;j++){
            cout<<j;
        }
        for(int m=1;m<=i-1;m++){
                cout<<a;
                a--;
            }
        cout<<endl;
    }
    } 
    
