#include<iostream>
// #include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);

    vector<int>r;
    r.push_back(10);
    r.push_back(10);
    r.push_back(10);
    r.push_back(10);

    int InnerProduct = inner_product(v.begin(),v.end(),r.begin(),0);
    cout<<InnerProduct<<endl;
    
}