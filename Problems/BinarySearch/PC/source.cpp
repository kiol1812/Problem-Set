#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int minimumSize(vector<int>& nums, int maxOperations) {
    int l=1, r=1e9;
    while(l<r){
        int mid=(l+r)/2, cnt=0;
        for(int &num:nums) cnt+=(num-1)/mid;
        if(cnt>maxOperations) l=mid+1;
        else r=mid;
    }
    return l;
}

int main(){
    string line;
    while(getline(cin, line)){
        int maxOperations, tmp; cin>>maxOperations; cin.ignore();
        istringstream ss(line); vector<int> nums;
        while(ss>>tmp) nums.push_back(tmp);
        cout<<minimumSize(nums, maxOperations)<<"\n";
    }
}