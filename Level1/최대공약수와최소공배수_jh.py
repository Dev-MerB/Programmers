def solution(n, m):
    answer = []
    maxTemp = 0
    minTemp = 0
    if n > m:
        temp = n
        for i, value in enumerate(range(1, m + 1)):
            if m % value == 0 and n % value == 0:
                maxTemp = value
        while n != 0:
            if temp % n == 0 and temp % m == 0:
                minTemp = temp
                break
            temp += 1
    else:
        temp = m
        for i, value in enumerate(range(1, n + 1)):
            if m % value == 0 and n % value == 0:
                maxTemp = value
        while m != 0:
            if temp % n == 0 and temp % m == 0:
                minTemp = temp
                break
            temp += 1
    answer.append(maxTemp)
    answer.append(minTemp)
    return answer