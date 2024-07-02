#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void PrintDouble(int a)
{
    cout<<2 * a<<" ";
}


int main()
{
    vector<int>arr(5);
    arr[0]=1;
    arr[1]=10;
    arr[2]=20;
    arr[3]=30;
    arr[4]=40;

    //For_each method, which comes from algorithm header and it will simply take every element of the vector and pass it to the function.
    for_each(arr.begin(),arr.end(),PrintDouble);

}