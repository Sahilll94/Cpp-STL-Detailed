#include<iostream>
#include<list>

using namespace std;

int main()
{
    //Creation of a list named as "MyList"
    list<int>MyList;

    //insertion in a list;
    MyList.push_back(10);
    MyList.push_back(20);

    MyList.push_front(100); //It will push the element in the starting of the vector.
    //100->10->20;

    MyList.pop_back();

    MyList.pop_front();

    //10;

    cout<<MyList.size()<<endl;

    
}