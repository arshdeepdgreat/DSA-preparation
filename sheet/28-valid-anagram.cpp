 bool isAnagram(string s, string t) {
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(m.find(t[i]) == m.end() || m[t[i]] == 0)return false;
            m[t[i]]--;
        }
        
        for(pair<char,int> p : m){
            if(p.second != 0)return false;
        }
        return true;
    }