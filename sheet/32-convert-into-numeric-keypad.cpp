string printSequence(string S)
{
    //code here.
    map<char,string>m;
    int k=1;
    for(char a='A';a<='R';a++){
        if(((int)a-'A')%3==0)k++;
        for(int i=1;i<=(int)(a-'A')%3 + 1;i++){
            m[a]+=to_string(k);
        }
    }
    m[' '] = "0";
    m['S'] = "7777";
    m['T'] = "8";
    m['U'] = "88";
    m['V'] = "888";
    m['W'] = "9";
    m['X'] = "99";
    m['Y'] = "999";
    m['Z'] = "9999";
    
    for(char i:S){
        cout<<m[i];
    }
    return "";
}