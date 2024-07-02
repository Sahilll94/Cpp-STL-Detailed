#include<iostream>
#include<list>      //We will use list as it is doubly Linked list which allows you to go forward and backward.
using namespace std;

int main()
{
    list<int>nums;
    nums.push_front(10);
    nums.push_front(20);
    nums.push_front(30);
    nums.push_front(40);

    //Forward directions.
    list<int>::iterator it=nums.begin();
    while(it != nums.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    //Backward directions.
    list<int>:: iterator itr=nums.end();
    while(itr != nums.begin())
    {
        itr--;      //Here, we can do it.       why we put itr-- first? as nums.end() means it is pointing outside of the list right?   
        cout<<*itr<<" ";
    }

}