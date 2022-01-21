l = input("")
length = len(l)
mid = length//2
for i in range (mid,0,-1):
    prefix = l[0:i]
    suffix = l[length-i:length]
    
    if (prefix==suffix):
        print(len(prefix))
        break