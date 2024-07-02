#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    list<int>L2;
    L2.push_back(10);
    L2.push_back(10);
    L2.push_back(10);
    L2.push_back(10);


    L1.swap(L2);


    list<int>:: iterator it=L1.begin();
    while(it != L1.end()){
        cout<<*it<<" ";
        it++;
    }

}