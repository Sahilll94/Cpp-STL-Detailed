#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(30);

    //Capacity doubles it size as per the insertion of a new element if it is out of range of the provided capacity.
    cout<<v.capacity()<<endl;   //It shows the capacity that the vector can hold at a time, like it can have extra spaces/box left to store.
}