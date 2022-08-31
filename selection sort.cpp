#include<iostream>

using namespace std;

int main(){
    int size;
    cin>>size;

    int arr[size],i;
    
    for(i=0;i<size;i++)
    cin>>arr[i];

    cout<<"Before Sort:\n";
    for(i=0;i<size;i++)
    cout<<arr[i]<<" ";

}    