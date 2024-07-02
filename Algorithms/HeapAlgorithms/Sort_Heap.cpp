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

    make_heap(v.begin(),v.end());

    cout<<"Max heap before sort function: ";
    for(auto j:v)
    {
        cout<<j<<" ";
    }
    cout<<endl;

    //Sort heap sorts the heap as ascending order as it is descending order(max_heap) right?
    sort_heap(v.begin(),v.end());
    //O(n);

    cout<<"Max heap after sort function: ";
    for(auto i:v)
    {
        cout<<i<<" ";
    }
}