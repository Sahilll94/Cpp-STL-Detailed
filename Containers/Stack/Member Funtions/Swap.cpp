#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int>s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    stack<int>s2;
    s2.push(1);
    s2.push(2);
    s2.push(3);
    s2.push(4);

    s1.swap(s2);

    cout<<s1.top()<<endl;
}