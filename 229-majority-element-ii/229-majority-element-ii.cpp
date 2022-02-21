class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size();
        int x=n/3;
        
        map<int,int> mp;
        for(int i=0; i<n; i++)
            mp[nums[i]]++;
        
        vector<int> vect;
        for(auto r:mp){
            if(r.second>x)
                vect.push_back(r.first);
        }
        return vect;
    }
};