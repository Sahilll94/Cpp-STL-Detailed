#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>>arr(4);  //name of vector is "arr" and number of rows is "4".
    arr[0]=vector<int>(2);  //first row's number of column is "2".
    arr[1]=vector<int>(3);  //second row's number of column is "3".
    arr[2]=vector<int>(1);
    arr[3]=vector<int>(10);

    //Number of rows;
    int rows=arr.size();

    int column=0;

    for(int i=0;i<arr.size();i++){
        column=arr[i].size();
    }

    cout<<"The number of column is: "<<column<<endl;    //It will return you the maximum row count.
}