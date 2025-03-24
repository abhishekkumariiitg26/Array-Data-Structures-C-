#include<iostream>
using namespace std;
int array_global[10]; // initialised with 0 and max size is 10^7
int main(){
    int array_local[10]; // initialised with garbage value and max size can be 10^6
    for (int i = 0; i < 10; i++)
    {
        cout<<array_global[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<array_local[i]<<" ";
    }
    
    
    return 0;
}