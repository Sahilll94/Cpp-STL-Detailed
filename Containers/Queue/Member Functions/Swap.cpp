#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int>q1;

    q1.push(10);
    q1.push(10);
    q1.push(10);
    q1.push(10);


    queue<int>q2;
    q2.push(0);
    q2.push(0);
    q2.push(0);
    q2.push(0);

    q1.swap(q2);

    cout<<"AFTER SWAPPING"<<endl;
    cout<<"The queue q1 first element is: "<<q1.front();
}