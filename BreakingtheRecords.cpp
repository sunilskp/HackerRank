/*
Breaking the Records 
*/


vector<int> breakingRecords(vector<int> scores) {
    int max = scores[0]; // to store the max record 
    int min = scores[0]; // to store the min record 
    int count_max = 0; // to count the number of time she broke her best record 
    int count_min = 0; // to count the number of time she broke her worst record
    vector <int> re ;
    int len  = scores.size();
    for (int i=0; i<len; i++)
    {
        if(max<scores[i])
        {
            max = scores[i];
            count_max++;
        }
        if(min>scores[i])
        {
            min = scores[i];
            count_min++;
        }
    }
    re.push_back(count_max);
    re.push_back(count_min);
    return re;
}
