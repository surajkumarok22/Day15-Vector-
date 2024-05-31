#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(10, -1);
    cout<<vec.size() <<endl;


    for(int i = 0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}