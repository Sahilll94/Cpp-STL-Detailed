#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<string,string>p;

    p["1"]="DBMS";
    p["2"]="OS";
    p["3"]="COA";
    p["4"]="OOPS";

    cout<<"Size: "<<p.size()<<endl;

    unordered_map<string,string>:: iterator it=p.begin();

    //It is unordered therefore it will be in any way.
    while( it != p.end()){
        pair<string,string>P=*it;
        cout<<P.first<<" "<<P.second<<endl;
        it++;
    }

}