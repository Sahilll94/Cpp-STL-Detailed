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

    //It will  always return the value greater then the target element.
    int target=20;
    auto it=upper_bound(v.begin(),v.end(),target);
    cout<<*it<<endl;

}