#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //A way to create a vector.
    vector<int>result(v.size());

    partial_sum(v.begin(),v.end(),result.begin());

    vector<int>::iterator it=result.begin();

    while (it != result.end()){
        cout<<*it<<" ";
        it++;
    }
}