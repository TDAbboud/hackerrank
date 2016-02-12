"""
    The itertools module standardizes a core set of fast, memory efficient tools that are useful by themselves or in combination. Together, they form an iterator algebra making it possible to construct specialized tools succinctly and efficiently in pure Python.

    To read more about the functions in this module, check out their documentation here.

    You are given a list of NN lowercase English letters. For a given integer KK, you can select any KK indices (assume 11-based indexing) with a uniform probability from the list.

    Find the probability that at least one of the KK indices selected will contain the letter: 'aa'.

    Input Format

    The input consists of three lines. The first line contains the integer NN, denoting the length of the list. The next line consists of NN space-separated lowercase English letters, denoting the elements of the list.

    The third and the last line of input contains the integer KK, denoting the number of indices to be selected.

    Output Format

    Output a single line consisting of the probability that at least one of the KK indices selected contains the letter:'aa'.

    Note: The answer must be correct up to 3 decimal places.

    Constraints
    1 <= N <= 10
    1 <= K <= N

    SAMPLE INPUT:
        4
        a a c d
        2
    SAMPLE OUPUT:
        0.8333
"""
from itertools import combinations

N = input()
l = raw_input().split()
K = input()

cnt = 0
comb = 0
for x in combinations(l, int(K)):
    comb = comb + 1
    if 'a' in x:
        cnt = cnt + 1

print "%.3f" % (float(cnt)/float(comb))

