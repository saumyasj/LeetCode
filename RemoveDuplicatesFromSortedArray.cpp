class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        int id=1;
        if(len<2) return len;
        for(int i=1;i<len;i++){
            if(nums[i]!=nums[i-1]){
                nums[id++]=nums[i];
            }

        }
        return id;
    }
};
