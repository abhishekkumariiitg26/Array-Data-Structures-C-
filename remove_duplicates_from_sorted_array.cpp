#include <iostream>
#include <vector>
using namespace std;
void build_array(vector<int> &array)
{

    cout << "\nEnter the elements of the array: ";
    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }
}
void print_array(const vector<int> &array, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int removeduplicates(vector<int> &array)
{
    int i = 0;
    for (int j = 1; j < array.size(); j++)
    {
        if (array[i] != array[j])
        {
            i++;
            array[i] = array[j];
        }
    }
    return i + 1;
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
    cout << "\nThe elements of the array are: ";
    print_array(array, size);
    cout << "\nThe new array with removed duplicates is: ";
    int new_len = removeduplicates(array);
    print_array(array, new_len);

    return 0;
}