#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>first;
    vector<int>second;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

    second.push_back(1);
    second.push_back(2);
    second.push_back(3);
    second.push_back(4);

    //It swaps the two vector.
    first.swap(second);

    cout<<first[0];

}