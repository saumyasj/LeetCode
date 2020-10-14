class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=height.size();
        int start=0, end=n-1, area=0;
        while(start<end){
            area=max(area, (min(height[start],height[end]) *(end-start)) )  ;
            if(height[start]<height[end])
                start++;
            else 
                end--;
        }
        return area;
    }
};
