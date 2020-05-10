// Find Town Judge

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if(N==1)
            return 1;
        unordered_map<int,int> ump1;
        unordered_map<int,int> ump2;
        
        for(int i=0;i<trust.size();i++)
        {
            ump1[trust[i][0]]++;
            ump2[trust[i][1]]++;
        }
        
        for(auto it=ump2.begin();it!=ump2.end();++it)
        {
            if( (it->second)==N-1 )
            {
                if( ump1.find(it->first)==ump1.end() )
                    return it->first;
            }
        }
        return -1;
        
    }
};