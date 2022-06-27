class Solution {
public:
    int minPartitions(string n) {
        int k=1;
        for(int i=0; i<n.length(); i++)
            k = max(n[i]-'0', k);
        
        return k;
    }
};