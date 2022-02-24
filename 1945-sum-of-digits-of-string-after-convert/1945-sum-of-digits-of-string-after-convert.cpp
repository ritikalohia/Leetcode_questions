class Solution {
public:
    int getLucky(string s, int k) {
        string sum;
        int output;
        for(int i=0; i<s.length(); i++){
            sum += to_string(int(s[i])-96);
        }    

        while(k!=0){
            int t=0;
            for(int i=0; i<sum.length(); i++){
                t = t+ (sum[i]-'0'); 
            }
            output=t;
            sum.clear();
            while(t>0){
                int x= t%10;
                sum = to_string(x)+sum;
                t = t/10;
            }
            cout<<sum<<endl;
            k--;
        }
        
        
        
        return output;
    }
};