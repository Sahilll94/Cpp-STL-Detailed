#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    
    cout<<v.front()<<endl; //It will give you the first element of the Vector.
    cout<<v.back()<<endl;  //It will give you the last element of the vector.
}