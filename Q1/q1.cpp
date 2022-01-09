
#include <bits/stdc++.h>
using namespace std;
// Given an array nums containing n distinct numbers in the range [0, n], 
//return the only number in the range that is missing from the array.
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int ans = 0;
    for(int i = 1; i <= nums.size(); i++) ans ^= i;
    for(auto i : nums) ans ^= i;
    cout <<  ans << endl;
}

