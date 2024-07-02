#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int>st;

    st.insert(10);
    st.insert(20);
    st.insert(40);
    st.insert(30);
    st.insert(30);
    st.insert(30);
    st.insert(30);
    st.insert(30);
    
    //It will print 30 only one time as set removes the duplicates.
    set<int>::iterator it= st.begin();

    while(it != st.end())
    {
        cout<<*it<<" ";
        it++;
    }
}