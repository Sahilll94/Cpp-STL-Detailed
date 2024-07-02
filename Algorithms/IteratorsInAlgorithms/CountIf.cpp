#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool IsEven(int a){
    return a%2==0;
}

int main()
{
    vector<int>v;

    v.push_back(10);
    v.push_back(101);
    v.push_back(102);
    v.push_back(103);
    v.push_back(103);
    v.push_back(104);

    //It will check as per the criteria PREDICATE
    int ans=count_if(v.begin(),v.end(),IsEven);
    cout<<ans;
}