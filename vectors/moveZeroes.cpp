// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

// approach :- we can solve this question with the concept of bubble sort
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void moveZeroes(vector<int>& nums){
    int n=nums.size()-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (nums[j]==0 && nums[j+1]!=0)
            {
               swap(nums[j],nums[j+1]);
            }
            
        }
        
    }
    
}
int main(){
    vector<int> nums={0,12,0,1,3};
    moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}