#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    int total = accumulate(v.begin(),v.end(),0);
    cout<<"the sum of element is: "<<total<<endl;

    int totalby10= accumulate(v.begin(),v.end(),10);
    cout<<"The sum of elements starting by 10: "<<totalby10<<endl;;
}