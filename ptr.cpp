#include<iostream>
using namespace std;

int* func(){
    int *ptr = new int;
    *ptr = 1200;
    cout<<"ptr points to "<<*ptr<<endl;
}

int main()
{
     int *x = func();
     cout<< *x <<endl;


    return 0;

}