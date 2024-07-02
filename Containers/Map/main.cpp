#include <iostream>
#include<map>
#include<unordered_map> //Don't forget about it.

using namespace std;

int main() 
{
    //Creation
    unordered_map<string,string>Table;      //TC: O(1) and ordered_map TC: O(logn)

    //Simple way Insertion
    Table["in"]="India";

    //Second way of Insertion using Insertion member function
    Table.insert(make_pair("en","England"));
    
    //Third method for insertion.
    pair<string,string>p;
    p.first="Br";
    p.second="Brazil";   
    Table.insert(p);

    cout<<Table.size()<<endl;

    Table.clear();

    cout<<"Map after using clear member function: "<<Table.size()<<endl;

    if(Table.empty()){
        cout<<"The Map is empty."<<endl;
    }
    else{
        cout<<"The Map is not empty."<<endl;
    }
}