class Solution {
public:
    vector<int> diStringMatch(string s) {
        int x=1;
        int cnt=0;
        vector<int> vect;
        vect.push_back(0);
        for(int i=0; i<s.length(); i++){
             vector<int>::iterator it; 
            
             if(s[i]== 'I'){
                 vect.push_back(x);
                 cnt=0;
             }   
             else if(s[i]=='D'){
                 cnt++;
                 it = vect.insert ( vect.end()-cnt, x);
             }   
            x++;
        }
        return vect;
    }
};