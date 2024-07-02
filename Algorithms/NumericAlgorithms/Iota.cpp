#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    vector<int>v(5);

    //It simply increase the value by 50 like 50,51,52,53,54 till 5th element as the size of the vector v is 5;
    iota(v.begin(),v.end(),50);

    for(int a:v){
        cout<<a<<" ";
    }
}