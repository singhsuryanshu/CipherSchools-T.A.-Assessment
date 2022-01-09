
#include <bits/stdc++.h>
using namespace std;
//Given an integer array nums of length n and an integer target, find three integers in nums 
//such that the sum is closest to target. Return the sum of the three integers.You may assume 
//that each input would have exactly one solution . Input:nums =[-1,2,1,-4],target = 1 , Output: 2 
int main() {
    int n,target;
    cin >> n >> target;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    sort(nums.begin() , nums.end());
    int ans = 0;
    int min_diff = INT_MAX;
        
        
    for(int i = 0; i < n-2; i++){
        int j = i+1;
        int k = n-1;
        
        while(j < k){
            int sum = nums[i] + nums[j] + nums[k];
            
            if(abs(target - sum) < min_diff){
                min_diff = abs(target-sum);
                ans = sum;
            }
            if(sum <= target) j++;
            else k--;
        }
    } 
    cout <<  ans << endl;
}

