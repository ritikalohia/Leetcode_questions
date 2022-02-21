class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n=intervals.size();

        for(int i=0; i<intervals.size(); i++)
            for(int j=i+1; j<intervals.size(); j++){
                if(intervals[i][0]<=intervals[j][0] && intervals[i][1]>=intervals[j][1] ){
                    vector<vector<int>>::iterator it = intervals.begin() + j;
                    intervals.erase(it);
                    j--;
                }
                else if(intervals[i][0]==intervals[j][0] && intervals[i][1]<=intervals[j][1]){
                    vector<vector<int>>::iterator it = intervals.begin() + i;
                    intervals.erase(it);
                    i--;
                }
            }
        
        return intervals.size();
    }
};