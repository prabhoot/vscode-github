for i in range(int(input())):
    length = int(input())
    entry_logs = list(map(int, input().split()))
    emps = [0 for i in range(2*(10**5))]
    max_people, people = 0, 0
    for i in range(length):
        if emps[entry_logs[i]]:
            people -= 1
            emps[entry_logs[i]] = 0
        else:
            people += 1
            emps[entry_logs[i]] += 1
        if people>max_people:
            max_people = people
    print(max_people)