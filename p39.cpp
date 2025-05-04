#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<5;i++){
        char ch='A'+i;
        for(j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}