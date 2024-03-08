/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    var total = init;
    for(var i = 0; i<nums.length; i++){
        total = fn(total, nums[i]);
    }
    return total;
};