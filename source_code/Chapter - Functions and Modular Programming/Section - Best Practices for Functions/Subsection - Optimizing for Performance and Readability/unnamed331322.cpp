std::vector filterEven(const std::vector& nums) {
    std::vector result;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (nums[i] % 2 == 0) {
            result.push_back(nums[i]);
        }
    }
    return result;
}