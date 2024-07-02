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
    v.push_back(60);

    cout<<v.at(3)<<endl;    //"at" function member will provide you the element at the specific location.
    cout<<v.capacity()<<endl;
    cout<<v[7]<<endl;
}