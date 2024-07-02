#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>L;
    L.push_back(10);
    L.push_back(90);
    L.push_back(40);
    L.push_back(20);

    //Traversing through iterator which is a pointer pointing at beginning of the vector.
    list<int>::iterator it = L.begin();

    cout<<"[ ";
    while(it != L.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<" ]";

}