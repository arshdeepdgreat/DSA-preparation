pair<long long, long long> getMinMax(long long a[], int n) {
   long long minnum=INT_MAX,maxnum=INT_MIN;
   for(long long i=0;i<n;i++){
       minnum=min(minnum,a[i]);
       maxnum=max(maxnum,a[i]);
   }
   pair<long long, long long>k={minnum,maxnum};
   return k;
}