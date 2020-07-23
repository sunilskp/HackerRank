vector<int> findPoint(int px, int py, int qx, int qy)
{
  vector <int> sol;
  sol.push_back((qx-px)+qx);
  sol.push_back((qy-py)+qy);
  return sol;


}
