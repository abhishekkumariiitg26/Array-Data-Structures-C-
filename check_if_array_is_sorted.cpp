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

    cout << "The elements of the array are: ";
    for (int item : array)
    {
        cout << item << " ";
    }
}
bool check_sorted_array(vector<int> &array)
{
    for (int i = 1; i < array.size(); i++)
    {
        if (array[i - 1] > array[i])
        {
            return false;
        }
    }
    return true;
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
    print_array(array);
    cout << endl;
    if (check_sorted_array(array))
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}