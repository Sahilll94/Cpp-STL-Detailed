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

    //It will make a MAX HEAP means bigger to smaller descending order.
    make_heap(v.begin(),v.end());
    //TC: O(n)

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}