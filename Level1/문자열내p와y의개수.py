def solution(s):
    answer = True
    count_p = 0
    count_y = 0
    for i, value in enumerate(s):
        if value == 'p' or value == 'P':
            count_p += 1
        elif value == 'y' or value == 'Y':
            count_y += 1
    if count_p != count_y:
        answer = False
    return answer