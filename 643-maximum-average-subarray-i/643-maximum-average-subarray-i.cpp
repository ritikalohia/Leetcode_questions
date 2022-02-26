class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum =0;
        for(int i=0; i<k; i++)
            sum += nums[i];
        
        double maxaverage = sum/k;
        for(int i = k, j=0; i<nums.size(); i++, j++){
            sum = sum - nums[j] + nums[i]; 
            maxaverage = max(maxaverage, sum/k);
        }
        return maxaverage;
    }
};