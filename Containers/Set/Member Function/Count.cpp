#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int>st;

    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);
    st.insert(40);

    if(st.count(40)==1){
        cout<<"Element is there in the set.";
    }
    else{
        cout<<"Element is not there in the set";
    }
}