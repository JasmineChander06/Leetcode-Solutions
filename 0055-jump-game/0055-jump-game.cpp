class Solution {
public:
    bool canJump(vector<int>& nums) {
     int maxReach=0;
     //so firstly we roll out the case where we cant reach 
     for(int i=0;i<nums.size();i++){

        if(i > maxReach){

            return false;
        }
        // we will update the maxreach as if 2 element 2+0 arr[i]+i
        maxReach =max(maxReach,i+nums[i]);
        if(maxReach >= nums.size()-1){
            return true;
        }
     }

    return true;
    }
};