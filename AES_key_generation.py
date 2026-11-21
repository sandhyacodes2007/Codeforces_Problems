seed = int(input("koi bhi number daalo:"))

a= 1103515245
c=12345
m=2**31

hexdigits="0123456789abcdef"
key=""


for i in range(16):
    seed= (a*seed+a) %m
    byte= (seed>>16)%256

    key+=hexdigits[byte // 16] + hexdigits[byte % 16]



print("aes key (hex):", key)