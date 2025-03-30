// Your code here...
def find_majority_element(N, arr):
    # Step 1: Boyer-Moore Voting Algorithm to find candidate
    candidate = None
    count = 0
    
    for num in arr:
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)
    
    # Step 2: Verify if candidate is majority element
    count = 0
    for num in arr:
        if num == candidate:
            count += 1
    
    if count > N // 2:
        return candidate
    else:
        return -1

# Input reading
N = int(input())
arr = list(map(int, input().split()))

# Output the majority element
print(find_majority_element(N, arr))