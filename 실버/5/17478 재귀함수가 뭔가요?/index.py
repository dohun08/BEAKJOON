n = int(input())

string = ["\"재귀함수가 뭔가요?\"", "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.", "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.", "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"", "라고 답변하였지."]
print("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.")
awnser = ["\"재귀함수가 뭔가요?\"", '\"재귀함수는 자기 자신을 호출하는 함수라네\"', "라고 답변하였지."]
def jh(n) :
    if n == 0 :
        for i in range(len(awnser)) :
            print(awnser[i])
        return
    else :
        for i in range(len(string)) :
            if len(string) -1 != i :
                print(string[i])
            string[i] = "____" + string[i]
        for i in range(len(awnser)) :
            awnser[i] = "____" + awnser[i]
        jh(n-1)
    string[-1] = string[-1][4:]
    print(string[-1])
jh(n)