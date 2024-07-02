#include<iostream>
#include<stack>

using namespace std;


int main()
{
    stack<int>s;

    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);

    if(s.empty()){
        cout<<"your stack is empty.";
    }
    else{
        cout<<"your stack is not empty.";
    }

}