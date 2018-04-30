#funny string or not | hackerrank | https://www.hackerrank.com/challenges/funny-string/problem
def reverseString(str):
    return "".join(reversed(str))

def funnyString(s):
    # Complete this function
    otherString  = reverseString(s)
    stringLength = len(s)
    for values in range(0,stringLength-1):
        c1 = ord(otherString[values])
        c2 = ord(otherString[values + 1])
        difference1 = abs(c1-c2)
        
        r1 = ord(s[values])
        r2 = ord(s[values + 1])
        difference2 = abs(r1-r2)
        
        if(difference1 == difference2):
            continue
        else:
            return "Not Funny"
    
    return "Funny"
        
        
        
    

q = int(input().strip())
for a0 in range(q):
    s = input().strip()
    result = funnyString(s)
    print(result)
