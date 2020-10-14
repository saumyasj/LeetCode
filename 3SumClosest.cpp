class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closestsum, start, end, currsum,n=nums.size();
        if(n<=2) return 0;
        sort(nums.begin(),nums.end());
        closestsum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            start=i+1, end=n-1;
            while(start<end){
                
                currsum=nums[i]+nums[start]+nums[end];
                if(currsum==target) return currsum;
                if(abs(target-currsum) < abs(target-closestsum))
                    closestsum=currsum;
                if(currsum>target)
                    end--;
                else 
                    start++;
                
            }
        
        }
        return closestsum;
    }
};
