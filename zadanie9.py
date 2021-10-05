def perevod10_2(c):
    c = abs(chislo)  # берем положительное число
    stepen = 0       # степень двойки
    dvoich = ''      # двойчное представление положительного числа
    while c > 2 ** stepen:
        stepen += 1
    stepen -= 1
    while stepen != -1:
        dvoich += str(c // 2 ** stepen)
        c %= 2 ** stepen
        stepen -= 1
    return dvoich


chislo = -175
dvoich=perevod10_2(chislo)    #перевод из 10 в 2

#дополняем до 2 байт
while len(dvoich)!=16:
        dvoich=''.join(('0',dvoich))

#меняем нули и единицы местами
dvoich=dvoich.replace('0','z')
dvoich=dvoich.replace('1','0')
dvoich=dvoich.replace('z','1')
print(int(dvoich)+1)
