#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int minSubArrayLen(const int &tar, const vector<int> &nums){
    int prefix=0, minimum=INT32_MAX;
    for(int r=0, l=-1; r<nums.size(); ++r){
        prefix+=nums[r];
        while(prefix>=tar){
            minimum = min(minimum, r-l);
            prefix-=nums[++l];
        }
    }
    return minimum==INT32_MAX?0:minimum;
}

int main(){
    int target, tmp;
    string line;
    cin>>target;
    cin.ignore();
    getline(cin, line);
    istringstream ss(line);
    vector<int> nums;
    while(ss>>tmp) nums.push_back(tmp);
    cout<<minSubArrayLen(target, nums)<<"\n";
    return 0;
}