vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> res; // for storing the result 
    int len1 = strings.size();
    int len2 = queries.size();
    for(int i=0; i<len2; i++) // For checking queries one by one. 
    {   int count =0;
        for(int j=0; j<len1; j++) // For Input string to be checked with queries. 
        {
            if(strings[j]==queries[i])
            {
                count++; // if same increment the value of count
            }
        }
        res.push_back(count);
    }
    return res;
}
