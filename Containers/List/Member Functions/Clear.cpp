#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int>v;
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);

    cout<<"The vector size before using clear function: "<<v.size()<<endl;

    v.clear();

    cout<<"The vector size after using clear function: "<<v.size()<<endl;

}