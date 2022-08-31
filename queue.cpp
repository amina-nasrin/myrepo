#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack <int> k;

    while (k.size() != 5)    {
        k.push(9);
        
    }
    

    cout<<"Size "<<k.size()<<endl;

    while(!k.empty()){
        cout<<k.top();
        k.pop();    
    }

}