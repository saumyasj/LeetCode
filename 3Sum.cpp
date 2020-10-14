class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<vector<int>> result;
        if(nums.size()<=2) return result;
        int i, start, end, n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;){
            int temp=nums[i];
            start=i+1;
            end=n-1;
            while(start<end){
                if(temp+nums[start]+nums[end]==0) {
                    result.push_back({temp, nums[start],nums[end]});
                    start++;
                    end--;
                    while((start<end)&&nums[start]==nums[start-1]) start++;
                    while((start<end)&&nums[end]==nums[end+1]) end--;
                }
                    
                else if(temp+nums[start]+nums[end]<0) {
                    start++;
                    while((start<end)&&nums[start]==nums[start-1]) start++;
                }
                    
                    
                else{
                    end--;
                    while((start<end)&&nums[end]==nums[end+1]) end--;
                }
            }
            i++;
            while((i<n) && nums[i]==nums[i-1]) i++;
        }
        return result;
    }
};
