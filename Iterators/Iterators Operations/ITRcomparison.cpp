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

    vector<int>::iterator itr1= v.begin();

    vector<int>::iterator itr2 = v.begin()+1;

    //Uncomment this line and both of them (iterators) will be at same positions.
    // itr1++;

    if(itr1==itr2){
        cout<<"Both the iterators are at the same positions."<<endl;
    }
    else{
        cout<<"both of them are at different position"<<endl;
    }


    if(itr1 != itr2){
        cout<<"Your both iterators are at different position.";
    }
    else{
        cout<<"Both of the iterators are at same position.";
    }
}