#include<iostream>
using namespace std;
int main(){
    int i,j,k,space,row=4,star;

    for(i=row;i>=0;i--){
        for(space=row;space>(row-i);j--){
            cout<<"0";
        }cout<<"\n";
    } 

}