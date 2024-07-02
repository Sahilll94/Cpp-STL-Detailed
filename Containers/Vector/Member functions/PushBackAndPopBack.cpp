#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Push_back and pop_back;
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    cout<<"The size of the element is: "<<arr.size()<<endl;     //To find the size.

    arr.pop_back();

    cout<<"The size of the element after performing the pop_back operation for first time: "<<arr.size()<<endl;
}