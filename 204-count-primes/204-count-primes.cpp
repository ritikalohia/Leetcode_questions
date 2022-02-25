class Solution {
public:

    int countPrimes(int n) {
       vector<bool> isPrime(n);
       for(int i=0; i<n; i++)
           isPrime[i] = true;
        
        for(int i=2; i*i<n; i++){
            if(!isPrime[i])
                continue;
            for(int j=i*i; j<n; j+=i)
                isPrime[j] = false;
        }
        
        int cnt=0;
        for(int i=2; i<n; i++)
            if(isPrime[i]) cnt++;
        
        return cnt;
    }
};