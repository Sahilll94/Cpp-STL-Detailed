#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);

    //Erase function removes/deletes the element.
    // v.erase(v.begin(),v.end());
    v.erase(v.begin()+2);

    cout<<v.size()<<endl;
}