#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    auto it = lower_bound(v.begin(),v.end(),35);
    cout<<*it<<endl;
}