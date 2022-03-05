class Solution {
public:
    int decToBinary(int n){
        // array to store binary number
        int binaryNum[n+1];
        int x=0;
        // counter for binary array
        int i = 0;
        while (n > 0) {

            // storing remainder in binary array
            binaryNum[i] = n % 2;
            if(n%2!=0)
                x++;
            n = n / 2;
            i++;
        }

        return x;    
        
}
    vector<int> countBits(int n) {
        vector<int> vect;
        for(int i=0; i<=n; i++)
            vect.push_back(decToBinary(i));
        
        return vect;
    }
};