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
void left_rotate_by_1(vector<int> &array){
    int temp=array[0];
    for (int i = 0; i < array.size()-1; i++)
    {
        array[i]=array[i+1];
    }
    array[array.size()-1]=temp;
    
}
int main()
{
    int size;
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
    left_rotate_by_1(array);
    cout<<"The left rotated array is: ";
    print_array(array);
   

    return 0;
}