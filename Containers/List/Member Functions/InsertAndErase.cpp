#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>L;
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);
    L.push_back(40);
    
    //Insert Function which insert value at the specified address.
    L.insert(L.begin(),10);

    cout<<"After inserting an element in the beginning of the vector: ";
    list<int>:: iterator it=L.begin();
    while( it != L.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    
    L.erase(L.begin());

    cout<<"After erasing an element from the beginning of the vector: ";
    list<int>:: iterator i=L.begin();
    while( i != L.end()){
        cout<<*i<<" ";
        i++;
    }

}