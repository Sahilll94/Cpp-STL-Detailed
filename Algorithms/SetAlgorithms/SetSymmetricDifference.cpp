#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    vector<int>v1;
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);

    vector<int>result;

    //Similar to set_difference but here it adds all the other leftover elements.
    set_symmetric_difference(v.begin(),v.end(),v1.begin(),v1.end(),inserter(result,result.begin()));

    for(auto i:result)
    {
        cout<<i<<" ";
    }
}