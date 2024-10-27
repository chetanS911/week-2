class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map<long long, int> mp;
        long long sum = 0;
        int maxLen = 0;
        
        
        mp[0] = -1;
        
        for(int i = 0; i < N; i++) {
            sum += A[i];  
            
            
            
            
            if(sum == K) {
                maxLen = i + 1;
                
                
                
            }
            if(mp.find(sum - K) != mp.end()) {
                maxLen = max(maxLen, i - mp[sum - K]);
            }
            
            
            if(mp.find(sum) == mp.end()) {
                mp[sum] = i;
            }
        }
        
        return maxLen;
    } 

};