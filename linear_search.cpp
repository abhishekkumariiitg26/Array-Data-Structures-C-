#include <iostream>
#include <vector>
using namespace std;
void build_array(vector<int> &array)
{

    cout << "Enter the elements of the array: ";
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
int linear_searching(vector<int> &array,int target){
    for (int i = 0; i < array.size(); i++)
    {
        if (target==array[i])
        {
            return i;
        }
        
    }
    return -1;
    
    

}

int main()
{
    int size,target;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "The array is empty." << endl;
        return 0;
    }
    vector<int> array(size);
    build_array(array);
    cout << "The elements of the array are: ";
    print_array(array);
    cout << endl;
    cout<<"Enter the target element you want to find: ";
    cin>>target;
    int result=linear_searching(array,target);
    cout<<"The target is at the index: "<<result;
  
  
    
   

    return 0;
}