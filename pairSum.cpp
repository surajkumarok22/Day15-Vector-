#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> array, int target){
    int currSum = 0;
    int srt = 0;
    int end = array.size() - 1;
    vector<int> ans;

    while(srt < end){
        currSum = array[srt] + array[end]; 

        if(currSum == target){
            ans.push_back(srt);
            ans.push_back(end);
            return ans;
        }
        else if( currSum > target){
                   end--;
        }
        else{
            srt++;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {2,7,11,15};
    int target = 9;
    vector<int> ans = pairSum(vec, target);
    cout<<ans[0]<<","<<ans[1]<<endl;

    return 0;

}