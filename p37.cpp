#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=1;j<=5-i-1;j++){
            cout<<"  ";
        }
        for(j=0;j<=i;j++){
            cout<<char('A'+j)<<" ";
        }
        for(j=i-1;j>=0;j--){
            cout<<char('A'+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}