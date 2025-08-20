from collections import defaultdict

def findZeroSumSubarrays(arr):
    prefix_sum = 0
    sum_map = defaultdict(list)
    result = []

    for i, num in enumerate(arr):
        prefix_sum += num

        if prefix_sum == 0:
            result.append((0, i))

       
        if prefix_sum in sum_map:
            for start in sum_map[prefix_sum]:
                result.append((start + 1, i))

        sum_map[prefix_sum].append(i)

    return result


arr = [1, 2, -3, 3, -1, 2]
print("Zero-sum subarrays:", findZeroSumSubarrays(arr))
