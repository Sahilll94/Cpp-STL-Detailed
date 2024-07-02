#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d;

    d.push_front(10);
    d.push_back(20);

    d.insert(d.begin()+1,200);

    cout<<d[1];
}