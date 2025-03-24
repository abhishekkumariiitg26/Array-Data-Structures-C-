#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void build_array(vector<int> &array){
  
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < array.size(); i++)
    {
        cin>>array[i];
    }
  
    
}
void print_array(const vector<int> &array){
   
    cout<<"The elements of the array are: ";
    for(int item:array){
        cout<<item<<" ";
    }
}

int find_largest_element(const vector<int> &array){
    
    
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
    if (size<=0)
    {
        cout<<"The array is empty."<<endl;
        return 0;
    }
    else{
        vector<int> array(size);
        build_array(array);
        print_array(array);
        int largest=find_largest_element(array);
        cout<<endl<<"The largest value in the array is: "<<largest;
    }
    return 0;
}