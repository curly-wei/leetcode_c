int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
  *returnSize = 2;
  int* result = (int*)malloc(sizeof(int) * (*returnSize) );
  int r0 = 0 , r1 = 0;
  for (int i = 0; i != numsSize -1 ; ++i) {
    for (int j = i+1; j != numsSize ; ++j) {
      if (nums[i] + nums[j] == target) {
        result[0] = i;
        result[1] = j;
      }
    }
  }
  return result;
}
