class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int len = 0;
        int ans = INT_MAX;
        int sum_final = 0;
        for(int i=0; i<nums.size();i++){
            sum_final+=nums[i];
        }
        if(sum_final<target){
            return 0;
        }
        else{
            
        
        
        int j = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            len++;
            if(sum>=target){
                ans = min(ans,len);
                
                len=0;
                sum=0;
                j++;
                i=j;
            }

        }
        return ans;
        }
    }
};