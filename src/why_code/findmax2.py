nums = [15, 7, 19, 3, 99, 7, 2]
max = nums[0]
for n in nums:
    if n > max:
        max = n

min = nums[0]
for n in nums:
    if n < min:
        min = n

print("max value = ", max)
print("min value = ", min)
