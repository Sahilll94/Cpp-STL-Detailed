#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    //Provide you the first element of the queue
    cout<<q.front()<<endl;

    //Provide the last element of the queue
    cout<<q.back();
}