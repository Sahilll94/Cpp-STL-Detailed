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

    vector<int>::iterator itr1=v.begin()+2;

    vector<int>::iterator itr2=v.begin();

    cout<<*itr2<<endl;

    //Assinging itr2 to the position of itr1;
    itr2=itr1;

    cout<<*itr2;

}