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
    v.push_back(50);

    make_heap(v.begin(),v.end());

    //It simply pop or removes the maximum element from the container as for now 50 and RETURNS 50 AT THE END.
    pop_heap(v.begin(),v.end());
    //TC: O(1)

    for(auto i:v){
        cout<<i<<" ";
    }
}