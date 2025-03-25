#include <iostream>
#include <vector>
#include<set>
using namespace std;
void build_array(vector<int> &array)
{

    
    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }
}
void print_array(const vector<int> &array)
{

    
    for (int item : array)
    {
        cout << item << " ";
    }
}
void union_of_array(vector<int> &array1, vector<int>&array2){
    set<int> st;
    for(auto it:array1){
        st.insert(it);
    }
    for(auto it:array2){
        st.insert(it);
    }
    if (st.empty())
    {
        cout<<"The union array is empty."<<endl;
    }
    else{

        for(auto it:st){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    

}


int main()
{
    int size1, size2;

    // Input size and elements for first array
    cout << "Enter the size of the array1: ";
    cin >> size1;
    
    vector<int> array1;
    if (size1 > 0) {
        array1.resize(size1);
        cout << "Enter the elements of the array1: ";
        build_array(array1);
    }

    // Input size and elements for second array
    cout << "Enter the size of the array2: ";
    cin >> size2;
    
    vector<int> array2;
    if (size2 > 0) {
        array2.resize(size2);
        cout << "Enter the elements of the array2: ";
        build_array(array2);
    }

    // Print original arrays
    if (!array1.empty()) {
        cout <<endl<< "The elements of the array1 are: ";
        print_array(array1);
    }
    
    if (!array2.empty()) {
        cout <<endl<< "The elements of the array2 are: ";
        print_array(array2);
    }

    // Compute and print the union of arrays
    cout <<endl<< "The union array is: ";
    union_of_array(array1, array2);
    
  
    
   

    return 0;
}