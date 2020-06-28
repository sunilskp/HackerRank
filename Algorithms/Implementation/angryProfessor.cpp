string angryProfessor(int k, vector<int> a) 
{
  int len = a.size();
  int count =0;
  for(int i=0; i<len; i++)
    {
        if(a[i]<1)
        {
          count++;
        }
    }
  if(count>=k)
    {
        return "NO";
    }
  else
    {
        return "YES";
    }
}
