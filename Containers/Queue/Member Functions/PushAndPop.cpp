#include<iostream>
#include<queue>

using namespace std;


int main()
{
    queue<int>q;


    q.push(20);
    q.push(30);
    q.push(120);
    q.push(101);
    q.push(103);
    q.push(102);
    q.push(101);
    q.push(110);
    q.push(410);


    //It will start removing elements from the front means from the start.
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();


    cout<<q.front()<<endl; //101

    cout<<q.back();

}