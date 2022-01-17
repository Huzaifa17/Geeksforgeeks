int findFrequency(vector<int> v, int x){
    // Your code here
    map<int,int> mp;
    map<int,int> :: iterator it;
    int i,j,k;
    for(i=0;i<v.size();++i)
    {
        mp[v[i]]++;
    }
    it=mp.find(x);
    if(it!=mp.end())
    {
        return it->second;
    }
    return 0;
}
