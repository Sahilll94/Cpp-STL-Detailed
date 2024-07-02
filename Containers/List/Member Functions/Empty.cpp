#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int>v;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);

    if(v.empty()){
        cout<<"the list is empty"<<endl;
    }
    else{
        cout<<"The list is not empty"<<endl;
    }
}