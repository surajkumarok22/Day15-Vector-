#include<iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;

    int *arr = new int[size];
    cout<<arr<<endl;
    cout<<*arr<<endl;
    return 0;

}