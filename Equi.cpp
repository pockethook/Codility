// find pivot in array where left==right

int equi(const vector<int> &A) {

  const vector<int>::size_type N = A.size();
  
  long long diff = 0;
  
  // initial diff
  for (vector<int>::const_iterator it = A.begin(); it != A.end(); ++it) {
    diff += *it;
  }

  // diff for each pivot
  for (vector<int>::size_type i = 0; i != N; ++i) {
    diff -= A[i];
    if (!diff) {
      return i;
    }
    diff -= A[i];
  }

  return -1;
    
}
