#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>V;
    V.push_back(10);
    V.push_back(20);
    V.push_back(30);
    V.push_back(40);

    //Find algorithm which finds the specific element in the given DS.
    int target = 400;
    auto it=find(V.begin(),V.end(),target);
    cout<<*it<<endl; //If the target element is not found it will give 0 as false.

    //Another method of find.
    // vector<int>::iterator i=find(V.begin(),V.end(),40);
    // cout<<*i<<endl;
}