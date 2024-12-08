#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;


vector<int> primes;
bool flag[1001];

bool primeSubOperation(vector<int>& nums){
    auto n = lower_bound(primes.begin(), primes.end(), nums[0]);
    if(nums[0]>2) nums[0]-=*(n-1);
    for(int i=1; i<nums.size(); ++i){
        if(nums[i]>nums[i-1]){
            if(nums[i]-nums[i-1]<=2) continue;
            n=lower_bound(primes.begin(), primes.end(), nums[i]-nums[i-1]);
            nums[i]-=*(n-1);
        }else return false;
    }
    return true;
}

int main(){
    for(int i=0; i<1001; ++i) flag[i]=true;
    for(int i=2; i<1001; ++i){
        if(flag[i]){
            primes.push_back(i);
            for(int j=i*i; j<1001; j+=i) flag[j]=false;
        }
    }
    string line;
    while(getline(cin, line)){
        istringstream ss(line); vector<int> nums; int tmp;
        while(ss>>tmp) nums.push_back(tmp);
        cout<<(primeSubOperation(nums)?"true":"false")<<"\n";
    }
}
