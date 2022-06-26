class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int x = cardPoints.size()-k;
        int n= cardPoints.size();
        int totalsum=0;
        for(auto d:cardPoints)
            totalsum += d;
        
        int window=0;
        for(int i=0; i<x; i++){
            window += cardPoints[i];
        }
        
        int right = n-k;
        int left = 0;
        
        int minx = totalsum-window;
        while(right<n){
            window += cardPoints[right++];
            window -= cardPoints[left++];
            cout<<window<<endl;
            minx = max(minx, totalsum-window);
        }
        
        return minx;
    }
};