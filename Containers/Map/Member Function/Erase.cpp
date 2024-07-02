#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main()
{
    unordered_map<string,string>Map;
    Map["In"]="India";

    pair<string,string>P;
    P.first="En";
    P.second="England";
    Map.insert(P);

    Map.insert(make_pair("Aus","Australia"));

    cout<<Map.at("En")<<endl;

    // Map.clear();

    Map.erase(Map.begin(),Map.end());

    cout<<"Size of the Map after using Erase member function: "<<Map.size()<<endl;
}