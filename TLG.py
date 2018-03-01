args = int(input())
maximum = 0
minimum=  0
score=[]
for i in range(1,args+1):
    marks=input()
    newscore=int(marks.split( )[0])-int(marks.split( )[1])
    score.append(int(newscore))
    if score[i-1]<minimum:
        minimum = score[i-1]
    if score[-1]>maximum:
        maximum = score[-1]
if maximum+minimum>0:
    print(1 ,maximum)
else:
    print(2,minimum*(-1))
