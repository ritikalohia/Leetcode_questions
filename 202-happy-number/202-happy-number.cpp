class Solution {
public:
    bool isHappy(int n) {
        
        int sum=0;
        while(n>=10){
            while(n){
               sum += pow(n%10,2);
                n=n/10;
            }
            
            n= sum;
            sum=0;
        }   
        if(n==1 || n==7)
            return true;
        return false;
    }
};