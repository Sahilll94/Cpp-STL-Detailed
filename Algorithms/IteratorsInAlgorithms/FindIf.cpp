#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Even(int a){
    return a%2==0;
}
int main()
{
    vector<int>v;
    v.push_back(101);
    v.push_back(20);
    v.push_back(301);
    v.push_back(403);

    auto it=find_if(v.begin(),v.end(),Even);
    cout<<*it<<endl;
}