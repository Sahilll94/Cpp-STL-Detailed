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

    // container_type<element_type>::iterator iterator_name;  SYNTAX OF ITERATOR

    vector<int>::iterator it=v.begin();

    for(it;it!=v.end();it++)
    {               
        cout<<*it<<" ";     //DONT FORGET TO PUT * as iterator is a pointer.
    }

    //another method
    while(it !=v.end())
    {
        cout<<*it<<" ";
    }
}