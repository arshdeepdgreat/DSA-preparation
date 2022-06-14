long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        if(m>n)
            return -1;
        if(m==0 || n==0)
            return 0;
        
        sort(a.begin(),a.end());
        long long sum=0;
        long long dif = INT_MAX;
        for(int i=m-1;i<n;i++){
            dif = min(dif,(a[i]-a[i+1-m]));
        }
        return dif;
    } 