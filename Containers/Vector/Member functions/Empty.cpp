#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v(10,4);

    if(v.empty()){
        cout<<"vector is empty";
    }
    else{
        cout<<"vector is not empty";
    }
}
