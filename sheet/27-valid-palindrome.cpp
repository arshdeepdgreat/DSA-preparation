 bool isPalindrome(string s) {
        int n=s.size();
        string t;
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                t+=tolower(s[i]);
            }
        }
        string t2 = t;
        reverse(t.begin(),t.end());
        if(t==t2)
            return true;
        else 
            return false;
    }