class Solution {
public:
    int furthestBuilding(vector<int>& h, int bricks, int ladders) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int bricksum=0;
        
        for(int i=1; i<h.size(); i++){
            int diff=h[i]-h[i-1];
            if(diff<=0)
                continue;
            
            pq.push(diff);
            if(pq.size()>ladders){
                bricksum += pq.top();
                pq.pop();
            }
            
            if(bricksum>bricks)
                return i-1;
        }
        return h.size()-1;
    }
};