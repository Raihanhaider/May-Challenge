// Check if all points are in a straight line

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cdn) {
        
        if(cdn.size()<=2)
            return true;
        
        unordered_map<double,int> ump;
        
        for(int i=1;i<cdn.size();i++)
        {
            double m = (double)(cdn[i][1]-cdn[i-1][1])/(double)(cdn[i][0]-cdn[i-1][0]);
            ump[m]++;
        }
        
        if(ump.size()==1)
            return true;
        
        return false;
        
    }
};