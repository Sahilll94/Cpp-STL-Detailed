#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>array(10,4);

    //Using begin();

    auto i=array.begin();       //why we used "auto"? as it will automatically identify the type of array. DON'T USE int or any other datatypes;
    cout<<*i<<endl; //Use *i as i is a pointer on it as being() gives the pointer not the value.
}