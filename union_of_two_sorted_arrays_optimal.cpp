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
void print_union(const vector<int>& arr1, const vector<int>& arr2) {
    int i = 0, j = 0;
    int n = arr1.size(), m = arr2.size();
    
    while (i < n && j < m) {
        if (i > 0 && arr1[i] == arr1[i - 1]) { // Skip duplicates in arr1
            i++;
            continue;
        }
        if (j > 0 && arr2[j] == arr2[j - 1]) { // Skip duplicates in arr2
            j++;
            continue;
        }

        if (arr1[i] < arr2[j]) {
            cout << arr1[i++] << " ";
        } 
        else if (arr2[j] < arr1[i]) {
            cout << arr2[j++] << " ";
        } 
        else { // Equal elements
            cout << arr1[i] << " ";
            i++; j++;
        }
    }
    
    // Add remaining elements in arr1
    while (i < n) {
        if (i == 0 || arr1[i] != arr1[i - 1]) 
            cout << arr1[i] << " ";
        i++;
    }

    // Add remaining elements in arr2
    while (j < m) {
        if (j == 0 || arr2[j] != arr2[j - 1]) 
            cout << arr2[j] << " ";
        j++;
    }
    cout << endl;
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
    print_union(array1, array2);
    
  
    
   

    return 0;
}