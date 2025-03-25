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
void reverse_array(vector<int> &array, int start, int end){
   
    while (start<end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }
    
}
void left_rotate_by_D_places(vector<int> &array,int D){
    int n=array.size();
    D=D%n;
   reverse_array(array,0,D-1);
   reverse_array(array,D,n-1);
   reverse_array(array,0,n-1);
    
}
int main()
{
    int size, D;
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
    cout<<"Enter the number of places you want to rotate the elements: ";
    cin>>D;
    left_rotate_by_D_places(array,D);
    cout<<"The left rotated array is: ";
    print_array(array);
   

    return 0;
}