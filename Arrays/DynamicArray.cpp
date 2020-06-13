
vector<int> dynamicArray(int n, vector<vector<int>> queries) 
{
    vector < vector<int> > seq(n);
    int last =0;
    int len = queries.size();
    vector <int> ans;
    for(int i=0; i<len; i++)
      {   
          int k = (last ^ queries[i][1])%n;
          if(queries[i][0]==1)
          {
              seq[k].push_back(queries[i][2]);
          }
          else if(queries[i][0]==2)
          {
              int ind = queries[i][2]%(seq[k].size());
              last = seq[k][ind];
              ans.push_back(last);
          }
      }
return ans;
}
