#include<iostream>
#include<forward_list>
using namespace std;

int main()
{   
    //FORWARD ITERATOR.
    //Single Linked List.
    forward_list<int>nums;
    nums.push_front(10);
    nums.push_front(20);
    nums.push_front(30);
    nums.push_front(40);

    forward_list<int>::iterator it=nums.begin();

    while( it != nums.end())
    {
        cout<<*it<<" ";
        it++;
    }

    //Now, forward iterator does not allow you to go backward right? only read, write and forward is done.

    forward_list<int>::iterator itr=nums.end();

    while(itr != nums.begin())
    {
        cout<<*it<<" ";
        it--;   //As you can see singly linked list does not go backward and forward iterator works here.
    }
}