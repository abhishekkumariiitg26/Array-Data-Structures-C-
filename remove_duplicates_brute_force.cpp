#include<iostream>
#include<vector>
#include<set>
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

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    if (size<=0)
    {
        cout<<"The array is empty."<<endl;
        return 0;
    }
    vector<int> array(size);
    build_array(array);
    cout << "The elements of the array are: ";
    print_array(array);
    set<int> st;
    for(int item: array){
        st.insert(item);
    }
    vector<int> result;
    int index=0;
    for(int num:st){
        result.push_back(num);
        index++;
    }
    cout<<endl<<"After removing duplicates: ";
    print_array(result);
    return 0;
}