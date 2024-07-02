#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(20);
    v.push_back(40);

    auto i=unique(v.begin(),v.end());
    v.erase(i,v.end());

    vector<int>:: iterator it=v.begin();

    while (it != v.end()){
        cout<<*it<<" ";
        it++;
    }
}