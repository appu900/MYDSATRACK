#include<bits/stdc++.h>
using namespace std;

int slidingWindow(vector<int>&nums,int k){
	int n = nums.size();
	int start = 0;
	int end = 0;
	int sum = 0;
	int maxSum = INT_MIN;
	while(end < n){
		sum += nums[end];
		if(end - start + 1 < k) end++;
		else if(end - start + 1 == k){
			maxSum = max(sum,maxSum);
			sum = sum - nums[start];
			end++;
			start++;
		}
	}

	return maxSum;
}

int main(){

	int k = 2;
	vector<int>nums{1,2,3,4,5};
	int ans = slidingWindow(nums,k);
	cout<<ans;
}