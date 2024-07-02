#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    int target=30;
    bool it = binary_search(v.begin(),v.end(),target);

    //This function return in bool value like whether the element is found in the vector or not.
    cout<<it<<endl;


}