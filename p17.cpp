#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(int i=1;i<=5;i++){
        char name='a'+i-1;
        for(int j=1;j<=i;j++){
           cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;

}