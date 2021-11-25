class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> um1,um2;
        
        for(auto s:ransomNote)
            um1[s]++;
        for(auto s:magazine)
            um2[s]++;
        
        for(auto c:um1){
            if(um2[c.first] < um1[c.first])
                return false;
        }
        
        return true;
    }
};
