class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n= columnTitle.size();
        int sum=0;
        for(int i=0; i<n; i++){
            sum = sum*26 + (int(columnTitle[i])-64); 
        }
        return sum;
    }
};