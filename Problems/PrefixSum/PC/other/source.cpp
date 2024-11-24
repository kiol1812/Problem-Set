#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int numberOfArrays(const vector<int> &diff, int lower, int upper){
    int maximum=-100001, minimum=100001, prefix=0;
    for(int i=0; i<diff.size(); ++i){
        prefix+=diff[i];
        if(prefix>200000||prefix<-200000) return 0;
        maximum = max(maximum, prefix);
        minimum = min(minimum, prefix);
    }
    if(maximum>0) upper-=maximum;
    if(minimum<0) lower-=minimum;
    return upper>=lower?upper-lower+1:0;
}

int main(){
    int lower, upper, tmp; cin>>lower>>upper;
    vector<int> differences;
    string line;
    cin.ignore();
    getline(cin, line);
    istringstream ss(line);
    while(ss>>tmp) differences.push_back(tmp);
    cout<<numberOfArrays(differences, lower, upper)<<"\n";
    return 0;
}