#include<iostream>
#include<vector>
using namespace std;

vector<int> build_array(vector<int> &array){
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < array.size(); i++)
    {
        cin>>array[i];
    }
    return array;
    
}
void print_array(vector<int> &array){
    cout<<"The elements of the array are: ";
    for(int item:array){
        cout<<item<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    vector<int> array(size);
    build_array(array);
    print_array(array);
    return 0;
}