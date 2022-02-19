class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> vect;
        vect.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++)
            vect.push_back(nums[i] + vect[i-1]);
        
        int n = vect.size();
        int last = vect[n-1];
        int first=0;
        for(int i=0; i<n; i++){
            if(i!=0)
                first= vect[i-1];
            int otherside = last-vect[i];

            if(first==otherside)
                return i;
        }
        return -1;
    }
};