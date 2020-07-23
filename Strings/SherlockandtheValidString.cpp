string isValid(string s)
{
      int len = s.length();
      int a[26];
      memset(a,0,sizeof(a));
      for(int i =0; i<len; i++)
      {
          int c = s[i]-97;
          a[c] = a[c]+1; 
      }
      int n_min=0,n_max=0,min=9999;

      int *max = max_element(a,a+26); 
      for(int i =0; i<26; i++)
      {
          if(a[i]>0 && a[i]<min)
          {
              min  = a[i];
          }
      }

          for(int i =0; i<26; i++)
          {
              if(a[i]== *max)
              {
                  n_max++;
              }
              if(a[i]== min)
              {
                  n_min++;
              }
          }

      if(((*max-min)==1) && ((n_max == 1)|| (n_min==1)))
      {
          return "YES";
      }
      if((*max-min)==0)
      {
          return "YES";
      }
      if(((*max-min)>1) && (n_min == 1) && ((n_max * *max)+(n_min * min)==len))
      {
          return "YES";
      }
      return "NO";

}
