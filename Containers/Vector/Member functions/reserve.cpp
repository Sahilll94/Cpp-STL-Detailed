#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    v.reserve(10);
    //Reserve function member helps you to take a permanent size for a vector.
    cout<<v.capacity()<<endl;
}