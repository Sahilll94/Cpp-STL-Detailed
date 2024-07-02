#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int>D;

    D.push_front(10);
    D.push_back(20);
    D.push_back(30);
    D.push_front(40);

    cout<<D.front()<<endl;

    // cout<<D.empty(); // 0 -> false, 1-> True

    if(D.empty()){
        cout<<"the Deque is empty.";
    }
    else{
        cout<<"The Deque is not empty";
    }
}