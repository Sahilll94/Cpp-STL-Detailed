#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);

    //Traversing and printing the elements using for each loop
    cout<<"[";
    for(int i:v){
        cout<<v[i]<<" ";
    }
    cout<<"]";
}