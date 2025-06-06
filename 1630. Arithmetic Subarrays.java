// optimized approach -- no need to sort the array find the ideal common differnce  and generate the array if any element missing in range then its not ap 

class Solution {
    public List<Boolean> checkArithmeticSubarrays(int[] nums, int[] l, int[] r) {
        List<Boolean> result = new ArrayList<>();
        
        for (int i = 0; i < l.length; i++) {
            int left = l[i], right = r[i];
            int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;
            Set<Integer> set = new HashSet<>();
            
            for (int j = left; j <= right; j++) {
                min = Math.min(min, nums[j]);
                max = Math.max(max, nums[j]);
                set.add(nums[j]);
            }
            
            int len = right - left + 1;
            if (len <= 2) {
                result.add(true);
                continue;
            }

            if ((max - min) % (len - 1) != 0) {
                result.add(false);
                continue;
            }

            int d = (max - min) / (len - 1);
            boolean isValid = true;

            for (int k = 0; k < len; k++) {
                int expected = min + k * d;
                if (!set.contains(expected)) {
                    isValid = false;
                    break;
                }
            }
            
            result.add(isValid);
        }

        return result;
    }
}
