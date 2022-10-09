function maxTrailing(arr) {
  let n = arr.length;

  let diff = arr[1] - arr[0];
  let curr_sum = diff;
  let max_sum = curr_sum;

  for (let i = 1; i < n - 1; i++) {
    diff = arr[i + 1] - arr[i];

    if (curr_sum > 0) curr_sum += diff;
    else curr_sum = diff;

    if (curr_sum > max_sum) max_sum = curr_sum;
  }
  if (max_sum < 0) return -1;
  else return max_sum;
}
