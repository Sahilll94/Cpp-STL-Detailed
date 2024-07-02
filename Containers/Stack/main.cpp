#include<iostream>
#include<stack>

using namespace std;


int main()
{
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<st.size()<<endl;

    st.pop();
    st.pop();
    
    //It will give you the topmost element of the stack means the last inserted element think of it as a TUB.
    cout<<st.top();

}