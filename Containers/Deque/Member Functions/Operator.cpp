#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int>d;

    d.push_front(10);
    d.push_front(20);
    d.push_front(30);
    d.push_front(40);

    cout<<d[1];  //It is operator d[];
}