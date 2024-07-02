#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int>pq1;
    pq1.push(10);
    pq1.push(20);
    pq1.push(30);
    pq1.push(100);

    priority_queue<int>pq2;
    pq2.push(10);
    pq2.push(100);
    pq2.push(1);
    pq2.push(10000);
    pq2.push(400000);

    //SWAP function
    pq1.swap(pq2);

    cout<<pq1.top()<<endl;
}