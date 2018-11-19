# String with vowel letters
Vowels = 'aeiou'
# Get inputs
n = int(input())
for _ in range(n):
    s = input()
    # Init answer with 0
    ans = 0
    for i in range(len(s)-1):
        # Check if two alongside letters are vowels to increase answer
        if s[i] in Vowels and s[i+1] in Vowels:
            ans+=1
    print(ans)