class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxlength=0;
        for(int start=0;start<nums.size();start++){
            int currentlength=1;
            for(int pos=start+1;pos<nums.size();pos++){
                if(nums[pos]>nums[pos-1]){
                    currentlength++;
                }
                else{
                    break;
                }
            }
            maxlength=max(maxlength , currentlength);

            
        }
            

        for(int start=0;start<nums.size();start++){
            int currentlength=1;
            for(int pos=start+1;pos<nums.size();pos++){
                if(nums[pos]<nums[pos-1]){
                    currentlength++;
                }
                else{
                    break;
                }
            }
            maxlength=max(maxlength,currentlength);
            
        }
                
                return maxlength;
    }        


};