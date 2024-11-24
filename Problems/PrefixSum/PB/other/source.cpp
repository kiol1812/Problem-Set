#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;

int subarraySum(const vector<int> &nums, const int k){
    int prefix=0, count=0;
    unordered_map<int, int> mp;
    for(const int & num:nums){
        prefix+=num;
        if(prefix==k) ++count;
        if(mp.find(prefix-k)!=mp.end()) count+=mp[prefix-k];
        ++mp[prefix];
    }
    return count;
}

int main(){
    int k, tmp; cin>>k;
    string line;
    cin.ignore();
    getline(cin, line);
    istringstream ss(line);
    vector<int> nums;
    while(ss>>tmp) nums.push_back(tmp);
    cout<<subarraySum(nums, k)<<"\n";
    return 0;
}