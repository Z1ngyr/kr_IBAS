x=int(input())
y=int(input())
if (x>=2 and y>=x-2) or (x<=0 and y>=x-2)or (0<=x<=2):
    print("да")
else:
    print("нет")