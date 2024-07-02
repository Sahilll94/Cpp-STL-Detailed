#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int>d;
    
    d.push_back(10);
    d.push_back(20);

    d.push_front(1);
    d.push_front(2);

    d.pop_front();

    cout<<d.size()<<endl;

    cout<<d.front()<<endl;

    cout<<d.back()<<endl;


}