#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout<<"The elements are:"<<"["<<v[0]<<" "<<v[1]<<" "<<v[2]<<"]"<<endl;

    v.clear();

    cout<<"Now after clearing the vector, you won't find any elements in it."<<endl;
    cout<<v.size()<<endl;
}