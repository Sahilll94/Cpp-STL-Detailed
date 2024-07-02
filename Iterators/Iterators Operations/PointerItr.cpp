//Here, *itr, a operation of iterators is given.
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

    vector<int>::iterator it = v.begin();

    while(it != v.end()){
        cout<<*it<<" ";     //Here, we used *it which simply returns the element at the current position where the iterator is pointing.
        it++;
    }
}