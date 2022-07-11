def solution(numbers):
    answer = 0
    temp = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
    for value in temp:
        for i in numbers:
            if value == i:
                value = 0
        answer += value
    return answer