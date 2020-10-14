class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return;
        int i,k=0;
        for(i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]) break;
        }
        
        if(i>=0){
            int j=nums.size()-1;
            while(j>i){
                if(nums[j]>nums[i]) break;
                j--;
            }
            swap(nums[i],nums[j]);
        }
        reverse(nums.begin()+i+1,nums.end());
    }
    
    
};
