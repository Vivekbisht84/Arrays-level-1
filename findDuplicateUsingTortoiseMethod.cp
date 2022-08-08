//Tortoise Method for finding Duplicate element
#include<iostream>
#include<vector>
#include<algorithm>
class Solution{
    public:
    int findDuplicate( vector<int> &nums){
        //placing both the elements at starting
        int slow = nums[0];
        int fast = nums[0];
        
        //move the element by : slow = 1 , fast = 2
        do{
            slow = nums[slow];
            fast = nums[nums[fast]]
        }while(slow!=fast);
        
        //now place the fast element again at the first position
        fast = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
