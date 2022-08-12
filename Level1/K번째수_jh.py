def solution(array, commands):
    answer = []
    for idx in range(len(commands)):
        temp = array[commands[idx][0] - 1 : commands[idx][1]]
        temp.sort()
        print(temp)
        answer.append(temp[commands[idx][2] - 1])
    return answer