#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int search(vector<int>& nums, int target) {
    int l=0, r=nums.size()-1;
    if(r==0&&nums[0]==target) return 0;
    while(l<r){
        int med=(l+r)/2;
        if(nums[med]>nums[r]) l=med+1;
        else r=med;
    }
    int tmp=l;
    l=0, r=tmp;
    while(l<r){
        int med=(l+r)/2;
        if(nums[med]==target) return med;
        if(nums[med]>target) r=med;
        else l=med+1;
    }
    l=tmp, r=nums.size();
    while(l<r){
        int med=(l+r)/2;
        if(nums[med]==target) return med;
        if(nums[med]>target) r=med;
        else l=med+1;
    }
    return -1;
}

int main(){
    string line;
    while(getline(cin, line)){
        int target, tmp; cin>>target; cin.ignore();
        istringstream ss(line); vector<int> nums;
        while(ss>>tmp) nums.push_back(tmp);
        cout<<search(nums, target)<<"\n";
    }
}
