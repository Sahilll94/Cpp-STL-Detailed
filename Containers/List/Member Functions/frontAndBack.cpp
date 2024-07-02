#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int>l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    
    //It gives the front element of the vector
    cout<<l.front()<<endl;

    //It gives the last element of the vector
    cout<<l.back()<<endl;
}