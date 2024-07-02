#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    //It will show the topmost element means the element which was inserted at the last.
    cout<<s.top();

}