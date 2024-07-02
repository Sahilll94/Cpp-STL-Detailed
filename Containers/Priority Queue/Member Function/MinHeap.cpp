#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>>pq; //It will create a Min_Heap as per greater<int> and vector<int> will store the element as underlying container.

    pq.push(10);
    pq.push(2);
    pq.push(300);
    pq.push(40);

    cout<<pq.top()<<endl;   //Here, It will give you the smallest number.
}