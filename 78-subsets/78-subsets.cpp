class Solution {
public:
    void uniquevector(vector<vector<int>>& vect, vector<int> t, vector<int>& nums, int k){
        if(k==nums.size()){
            vect.push_back(t);
            return;
        }
        
        uniquevector(vect, t, nums, k+1);
        t.push_back(nums[k]);
        uniquevector(vect, t, nums, k+1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vect;
        int k=0;
        vector<int> t;
        uniquevector(vect, t, nums, k);
        return vect;
    }
};