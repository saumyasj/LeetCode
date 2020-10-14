class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        if(intervals.size()==0) return intervals;
        vector<vector<int>> merged;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        merged.push_back(intervals[0]);
        
        for(int i=1;i<n;i++){
            if(merged.back()[1]>=intervals[i][0]){
                merged.back()[1]=max(merged.back()[1],intervals[i][1]);
            }
            else{
                merged.push_back(intervals[i]);
            }
        }
        
        return merged;
    }
};
