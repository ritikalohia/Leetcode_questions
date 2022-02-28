class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> vect;
        string str;
        int n= nums.size(), i=0;
        
        while(i<n){
            int j=i;
            while(i+1<=n-1 && nums[i+1] == nums[i]+1){
                i++;
            }
            if(i!=j)
                str = to_string(nums[j]) + "->" + to_string(nums[i]);
            else
                str = to_string(nums[j]);
                
            vect.push_back(str);
            i++;
        }
        return vect;
    }
};