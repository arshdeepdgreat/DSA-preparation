string removeConsecutiveCharacter(string S)
    {
        int n=S.size();
        string t;
        int p=0;
        t+=S[0];
        // code here
        for(int i=0;i<n;i++){
            if(S[i]!=t[p]){
                p++;
                t+=S[i];
            }
        }
        return t;
    }