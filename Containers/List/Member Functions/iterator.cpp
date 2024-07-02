#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>l;

    l.push_back(10);
    l.push_front(20);
    l.push_front(30);
    l.push_back(40);

    list<int>::iterator it=l.begin();

    while(it != l.end()){
        cout<<*it<<" ";
        it++;
    }

}