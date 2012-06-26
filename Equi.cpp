// find pivot in array where left==right

int equi(const vector<int> &A) {

  const int N = A.size();
  
  long long diff = 0;

  // initial diff
  for (int i = 0; i < N; i++)
    diff += A[i];
  
  // diff for each pivot
  for (int i = 0; i < N; i++) {
    diff -= A[i];
    if (!diff) return i;
    diff -= A[i];
  }
  
  return -1;
    
}
