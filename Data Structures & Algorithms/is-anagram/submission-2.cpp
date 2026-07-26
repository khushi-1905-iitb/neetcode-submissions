class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> counts;
        unordered_map<char,int> countt;

        if (s.size()!=t.size()) return false;
        else{
            for (int i=0; i<s.size(); i++){
                counts[s[i]]++;
                countt[t[i]]++;
            }
            if (counts==countt) return true;
            else return false;

        }
        
    }
};
