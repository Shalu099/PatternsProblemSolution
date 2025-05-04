#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            char name='a'+j-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}