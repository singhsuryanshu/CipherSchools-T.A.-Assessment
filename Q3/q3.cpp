
#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &nums, int start, vector<int> &dp){
        
    // base cases:
    if(start == nums.size() - 1) return nums[nums.size()-1];
    if(start == nums.size()) return 0;
    
    // recursive steps:
    
    if(dp[start] != -1) return dp[start];
    
    dp[start] = max( f(nums,start+1,dp) , nums[start] + f(nums,start+2, dp) );
    
    return dp[start];
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &i : nums) cin >> i;

    vector<int> dp(nums.size() , -1);
    
    cout <<  f(nums,0,dp) << endl;
    
}

