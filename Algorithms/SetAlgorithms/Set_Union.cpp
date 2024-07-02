#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    vector<int>v1;
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);

    vector<int>result;

    set_union(v.begin(),v.end(),v1.begin(),v1.end(),inserter(result,result.begin()));

    for(auto i:result)
    {
        cout<<i<<" ";
    }
}