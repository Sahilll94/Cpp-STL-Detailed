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

    //Creating a heap.
    make_heap(v.begin(),v.end());

    //Now, 50 will be at end as heap is Max_heap but here it is not like that.
    v.push_back(50);

    //For that we will use push_heap for INSERTION IN HEAP to keep it in descending order.
    push_heap(v.begin(),v.end());
    //TC: O(logn)

    for(auto i:v){
        cout<<i<<" ";
    }

}