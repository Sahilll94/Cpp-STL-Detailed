#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int>st;

    st.insert(40);
    st.insert(20);
    st.insert(0);
    st.insert(100000);
    st.insert(1);
    st.insert(1000);

    unordered_set<int>::iterator it=st.begin();

    //It will be stored RANDOMly.
    while(it != st.end())
    {
        cout<<*it<<" ";
        it++;
    }
}