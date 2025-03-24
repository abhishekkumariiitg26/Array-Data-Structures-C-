#include<iostream>
#include<vector>
#include<climits>
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

int find_largest_element(vector<int> &array){
    
    
    int ritik=INT_MIN;
    for(int item:array){
        if (ritik<item)
        {
            ritik=item;
        }
        
    }
    return ritik;
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    vector<int> array(size);
    if (array.size()==0)
    {
        cout<<"The array is empty."<<endl;
    }
    else{

        build_array(array);
        print_array(array);
        int largest=find_largest_element(array);
        cout<<endl<<"The largest value in the array is: "<<largest;
    }
    return 0;
}