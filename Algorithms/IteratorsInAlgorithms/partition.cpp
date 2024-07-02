#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool IsEven(int a){
    return a%2==0;
}

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(9);
    v.push_back(20);
    v.push_back(30);

    //It will make a partition as per the given predicate.
    partition(v.begin(),v.end(),IsEven);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}