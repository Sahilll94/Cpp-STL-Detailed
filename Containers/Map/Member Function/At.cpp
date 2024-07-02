#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<string,string>Map;
    Map["Ek"]="One";

    pair<string,string>p;
    p.first="Do";
    p.second="Two";
    Map.insert(p);

    cout<<Map.size()<<endl;

    //At function.
    cout<<Map.at("Do")<<endl;


    //Updating key's value using AT function.
    Map.at("Do")="Two2";
    cout<<Map.at("Do")<<endl;

    //Another method of updating
    Map["Do"]="Two3";
    cout<<Map.at("Do")<<endl;
}