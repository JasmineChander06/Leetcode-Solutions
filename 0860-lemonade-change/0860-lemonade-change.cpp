class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fivedolla=0;
        int tendolla=0;
        for(int customerbill: bills){
            if(customerbill==5){
                fivedolla++;
            }
            else if(customerbill==10){
                if(fivedolla>0){
                    fivedolla--;
                    tendolla++;
                }
                else{
                    return false;
                }
            }
            else{
                if(customerbill==20){
                    if(fivedolla>0 && tendolla>0){
                        fivedolla--;
                        tendolla--;
                    }
                    else if(fivedolla>=3){
                        fivedolla-=3;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
};