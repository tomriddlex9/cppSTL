function leftRotate(a, k, n) {
  rotate(a.begin(), a.begin() + (k % n), a.begin() + n);
  maxIndex = 0;
  for (i = 0; i < n; i++) {
    if (a[maxIndex] < a[i]) {
      maxIndex = i;
    }
  }
  return maxIndex;
}
function getMaxElementIndexes(a, rotate) {
  n = a.size();
  sol = [];
  maxValIndex = 0;
  maxVal = INT_MIN;
  for (i = 0; i < rotate.size(); i++) {
    sol.push_back(leftRotate(a, rotate[i], n));
  }
  return sol;
}
