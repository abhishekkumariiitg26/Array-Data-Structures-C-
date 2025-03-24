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

int find_second_largest_element(const vector<int> &array){
    
    if (array.size()<2)
    {
        cout<<endl<<"No second largest element found."<<endl;
        return INT_MIN;
    }
    
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    for(int item:array){
        if (largest<item )
        {
            second_largest=largest;
            largest=item;
        }
        else if(second_largest<item && largest>item){
            second_largest=item;
        }
        
    }
    if (second_largest==INT_MIN)
    {
        cout<<"No second largest element found."<<endl;
        return INT_MIN;
    }
    

    return second_largest;
    
    

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
        print_array(array);
        int second_largest=find_second_largest_element(array);
        if (second_largest!=INT_MIN)
        {
            
            cout<<endl<<"The second largest value in the array is: "<<second_largest;
        }
        

    return 0;
}