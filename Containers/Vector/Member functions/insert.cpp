#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(20);
    v.push_back(20);
    v.push_back(20);
    v.push_back(20);
    v.push_back(20);

    v.insert(v.begin(),40);
    v.insert(v.begin()+2,50);   //It will add at v[2] position 50 and it won't replace or delete any element.

    cout<<"[";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"]";
}