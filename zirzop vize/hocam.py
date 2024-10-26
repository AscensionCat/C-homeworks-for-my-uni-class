import time
a=0
harfler="abcçdefgğhıijklmnoöprsştuüvyz"
sayac=0
while True:
    gecici=int(input("lütfen 3 haneli pozitif bir tam sayı giriniz: "))
    if 1000>gecici>99 and gecici>0:
        a=gecici
        break
    else:
        sayac+=1
        if sayac<10:
            print("hatalı giriş yaptınız tekrar giriş ekranına yönlendiriliyorsunuz")
            time.sleep(0.3)
        elif sayac==10:
            print("APTAL 10 DENEMEDE DE YAZAN ŞEYİ UYGULAYAMADIN APTALL...")
            break
asal=[]
for i in range(2,a+1):
    degisken=0
    for j in range(2,i):
        if i!=j and i%j==0:
            degisken=1
            break
        else:
            degisken=0
    if degisken==0:
        asal.append(i)
if sayac!=10:
    print(asal)
    print(f"Ortalama Asal Sayı: {sum(asal) / len(asal)}")