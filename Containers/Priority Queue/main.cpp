#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int>pq;

    pq.push(10);
    //10
    pq.push(20);
    //20-10
    pq.push(5);
    //20-10-5

    pq.push(40);
    //40-20-10-5

    cout<<pq.top()<<endl;   

    //It will remove highest priority element as 50
    pq.pop();
    //20-10-5
    
    //After removing 50, it will print another highest (largest) element
    cout<<pq.top()<<endl;   

    cout<<pq.size()<<endl;

    if(pq.empty()){
        cout<<"The priority queue is empty.";
    }
    else{
        cout<<"The priority queue is not empty.";
    }
}