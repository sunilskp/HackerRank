vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice)
{
  scores.erase(unique(scores.begin(),scores.end()),scores.end());
  vector <int> order;
  int flag = scores.size()-1;
  int len2 = alice.size();
  for(int i=0; i<len2; i++)
    {
        int rank =0;
        while(flag>=0 && alice[i]>=scores[flag])
            flag--;

                if(flag==-1)
                  {
                      rank = 1;
                  }
                else if (alice[i] == scores[flag])
                  {
                      rank= flag+1;
                  } 
                else if (alice[i] < scores[flag])
                  {
                      rank= flag+2;
                  }
                order.push_back(rank);


    }
  return order;
}
