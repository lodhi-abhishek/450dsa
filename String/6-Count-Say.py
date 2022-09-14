# Using a Regular Expressions
import re
import itertools

def countandsay(n):
    s = '1'
    for _ in range(n-1):
        s = re.sub(r'(.)\1*', lambda m: str(len(m.group(0))) + m.group(1), s)

    return s

# Using regular Expression

def countAndSay(n):
    s = '1'
    for _ in range(n-1):
        # s = ''.join(str(len(group)) + digit for group,digit in re.findall(r'((.)\2*',s))
       s = ''.join(str(len(group)) + digit for group, digit in re.findall(r'((.)\2*)', s))
    return s

# Using groupby
def CountAndSay(n):
    s = '1'
    for _ in range(n - 1):
        s = ''.join(str(len(list(group))) + digit
                    for digit, group in itertools.groupby(s))
    return s

print(countAndSay(4))