#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int>L;

    L.push_back(10);
    L.push_back(20);
    L.push_back(30);
    L.push_back(40);
    L.push_back(10);
    L.push_back(10);

    list<int>:: iterator it=L.begin();
    cout<<"List before using REMOVE function: [";
    for(it;it!=L.end();it++){
        cout<<*it<<" ";
    }
    cout<<"]"<<endl;

    //It removes all the elements having same value stored in it. DUPLICATES.
    L.remove(10);

    list<int>:: iterator i=L.begin();

    cout<<"List after using REMOVE function: [";
    while(i != L.end()){
        cout<<*i<<" ";
        i++;
    }
    cout<<"]";

}