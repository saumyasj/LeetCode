class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        std::ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int i=0;
        int ai=arr.size();
        vector<int> out;
        for(auto a : arr)
        {
            if(i<ai)
            {
                ++i;
                out.push_back(a);   
            }
            if(a==0 && i<ai)
            {
                out.push_back(a);
                ++i;
            }
                
        }
        for(auto j=0;j<out.size();j++)
            arr[j]=out[j];
    }
};
