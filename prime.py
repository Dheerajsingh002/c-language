num=int(input("enterv the number: "))
prime =False
for i in range(2,num):
    if(num%i==0):
        prime=True
        break
if prime:
    print("this is not a prime")
else:
    print("this is a prime")
