#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=5;j>=5-i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}