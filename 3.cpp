//Ransom Note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mags;
        unordered_map<char,int> rNote;
        
        for(int i=0;i<magazine.size();i++)
            mags[magazine[i]]++;
        
        for(int i=0;i<ransomNote.size();i++)
            rNote[ransomNote[i]]++;
        
        for(int i=0;i<ransomNote.size();i++)
        {
            if(rNote[ransomNote[i]]>mags[ransomNote[i]])
                return false;
        }    
        return true;
    }
};