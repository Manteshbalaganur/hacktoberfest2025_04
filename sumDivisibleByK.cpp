class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(auto a:nums){
            mp[a]++;
        }
        int ans=0;
        for(auto it :mp){
            // even
            if(it.second%k ==0){
                ans+=it.first*it.second;
            }
        }
        return ans;
    }
};
