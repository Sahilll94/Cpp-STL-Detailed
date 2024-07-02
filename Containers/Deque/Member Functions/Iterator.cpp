#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int>d;

    d.push_back(10);
    d.push_front(20);
    d.push_back(30);

    deque<int>:: iterator it= d.begin();

    while(it != d.end()){
        cout<<*it<<" ";
        it++;
    }


}