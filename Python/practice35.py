nums = [10, 20, 30, 40, 50]
k = 0
item_to_found = 40
found_item = False
while k < len(nums):
    if nums[k] == item_to_found:
        found_item = True
    else:
        k += 1
if found_item:
    print("item found")
else:
    print("item not found")
