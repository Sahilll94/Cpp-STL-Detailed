//TO SEE 
#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int>table;
    table[1]=2;

    pair<int,int>p;
    p.first=3;
    p.second=4;

    table.insert(p);

    cout<<table.at(1);

    // map<int,int>::iterator it=;

    // it=(*it).first;
}