def solution(numbers):
    answer = []
    for i, value1 in enumerate(numbers):
        for j, value2 in enumerate(numbers):
            if i == j:
                continue
            else:
                answer.append(value1 + value2)
    answer = list(set(answer))
    answer.sort()
    return answer