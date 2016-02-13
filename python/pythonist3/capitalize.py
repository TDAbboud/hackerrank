"""
    You are given a string SS. Your task is to capitalize each word of SS.

    Input Format:
    A single line of input containing the string, SS.

    Constraints:
    0<len(S)<10000<len(S)<1000
    The string consists of alphanumeric characters and spaces.

    Output Format:
    Print the capitalized string, SS.

    Sample input:
        hello world
    Sample Output:
        Hello World
"""
import re
import sys

for line in sys.stdin:
    line = re.split(r'(\s+)', line)
    line = ''.join([i.capitalize() for i in line])
    print line
