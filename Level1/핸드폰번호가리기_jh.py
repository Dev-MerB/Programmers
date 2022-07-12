def solution(phone_number):
    answer = ''
    for i, value in enumerate(phone_number):
        if i > len(phone_number) - 5:
            answer += value
        else:
            answer += '*'
    return answer