def solution(x, n):
    answer = []
    temp = x
    for i in range(n):
        answer.append(x)
        x += temp
    return answer