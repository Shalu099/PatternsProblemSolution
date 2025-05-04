#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++){

    //space print
        for(j=1;j<=5-i;j++){
            
			cout<<"  ";
		}
            for(j=1;j<=2*i-1;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    
    return 0;
}