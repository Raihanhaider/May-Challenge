//Jewels & Stones

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        unordered_map<char,int> ump;
        
        for(int i=0;i<J.size();i++)
            ump[J[i]]++;
        int ans=0;
        for(int i=0;i<S.size();i++)
        {
            if(ump.find(S[i])!=ump.end())
                ans++;
        }
        return ans;
        
    }
};