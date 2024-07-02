#include<iostream>
#include<queue>     //Queue header file

using namespace std;

int main()
{
    //Creation of a queue
    queue<int>q;

    //Insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    //10-20-30-40
    //Front-Rear

    //To check size of the queue;
    cout<<q.size()<<endl;

    //QUEUE DOES NOT HAVE CLEAR MEMBER FUNCTION
    // Q.clear();

    q.pop();

    if(q.empty()){
        cout<<"the queue is empty";
    }
    else{
        cout<<"The queue is not empty";
    }

}