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

    if(st.find(20)!=st.end()){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
}