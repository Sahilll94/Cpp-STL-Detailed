#include<iostream>
#include<vector>

using namespace std;

int main()
{
    //2-D array created with 4 rows and 5 columns with initial value is 10.
    vector<vector<int>>arr(4,vector<int>(5,10));

    int NumberOfRow=arr.size();

    int NumberOfColumn=arr[0].size();

    cout<<"The number of rows is: "<<NumberOfRow<<endl;
    cout<<"The number of columns is: "<<NumberOfColumn<<endl;

}