#include<iostream>
#include<vector>

using namespace std;


int main()
{
    //Creation of a vector "arr";
    vector<int>arr;

    //Creation of a vector "Array" with size 10;
    vector<int>Array(10);

    //Creation of a vector "vec" with size 10 and elements are 4 at all the places;
    vector<int>vec(10,4);

    //Accessing the elements of a vector;
    cout<<"The element at second position of 'vec': "<<vec[2]<<endl;
}