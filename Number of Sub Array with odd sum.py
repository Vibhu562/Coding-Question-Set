# cook your dish here
# Number of Sub Array with odd sum\
# Step 1 generate all possible sub Array 
arr=[5,6,7,8]
n = len(arr)
count =0
for i in range(n):
    oddsum =0
    for j in range(i,n):
        oddsum = oddsum+arr[j]
        if (oddsum%2!=0):
            count +=1
print("no of substring is",count)            