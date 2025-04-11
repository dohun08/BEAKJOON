import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

prefix = [0] * (n + 1)
for i in range(1, n + 1):
    prefix[i] = prefix[i - 1] + arr[i - 1]

m = int(input())
output = []
for _ in range(m):
    a, b = map(int, input().split())
    output.append(str(prefix[b] - prefix[a - 1]))

sys.stdout.write('\n'.join(output))