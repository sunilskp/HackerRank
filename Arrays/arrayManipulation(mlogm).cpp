long arrayManipulation(int n, vector<vector<int>> queries) {
   
    vector < pair < int, int > > v; // we will make vector of pair
    // which will contain (a,k) and (b+1,-k)
    
    long len = queries.size();
    for(long i=0; i<len; i++)
    {
        v.push_back(make_pair(queries[i][0], queries[i][2])); // inserting (a,k)
        v.push_back(make_pair(queries[i][1]+1, -1 * queries[i][2]));// inserting (b+1,-k)
    }
    sort(v.begin(),v.end()); //sorting the vector according to the first element of the pair.
    long sum =0,x=0;
    // calculating prefix array sum
    for(long i=0; i<2*len; i++)
        {
            x = x + v[i].second;
            if(x>sum)
            {
                sum = x;
            }
        }
    return sum;
}
