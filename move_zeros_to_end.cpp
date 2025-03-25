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
void Moving_zero_to_end(vector<int> &array){
    int i=0;
    for (int j = 0; j < array.size(); j++)
    {
        if(array[j]!=0){
            swap(array[j],array[i]);
            i++;
        }
    }
    

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
    Moving_zero_to_end(array);
    cout<<"The new array is: ";
    print_array(array);
    
   

    return 0;
}