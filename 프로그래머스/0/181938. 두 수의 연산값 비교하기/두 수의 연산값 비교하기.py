def solution(a, b):
    answer = 0
    str1 = ""
    num = 0
    str1 = str(a) + str(b)
    num = int(a) * int(b) * 2
    if(int(str1) > num):
        answer = int(str1)
    elif(num > int(str1)):
        answer = num
    else:
        answer = int(str1)
    
    return answer