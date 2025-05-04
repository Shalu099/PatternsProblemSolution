#include<iostream>
using namespace std;
int  main(){
    int i,j;
   // int count=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
       //  cout<<count<<" ";
       //  count++;
       cout<<(i-1)*5+j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// if we not take another variable like count then second logic is :- [(row-1)*5+col]

