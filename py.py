# input()
# float()
# int()
# bool()
# type()
# print(a+b)    oprasi tambah
# print(a-b)    oprasi kurang
# print(a*b)    oprasi kali
# print(a/b)    oprasi bagi
# print(a**b)   oprasi eksponen
# print(a%b)    oprasi modulus(sisa bagi)
# print(a//b)   oprasi floor division(hasil yg didapet dari pembagian)

# # celcius ke fahrenheit dan kelvin
# celcius = float(input("Masukkan celcius: "))
# print("Celcius: ", celcius)
# print("Fahrenheit", (celcius*9/5)+32)
# print("Kelvin", celcius+273.15)

# # Fahrenheit ke Kelvin
# fahrenheit = float(input('Fahrenheit: '))
# print('Kelvin: ',((fahrenheit - 32) * 5 / 9 + 273))
# # Kelvin ke Fahrenheit
# kelvin = float(input('Kelvin: '))
# print('Fahrenheit: ',((kelvin - 273) * 9 / 5 + 32))

# a = 9
# print( a == 9)
# print(a+a+a)

# dict = {
#     "aku": "haikal", 
# "umur":"19"
# }

# Ada = False
# pertama = []
# N = int(input("Tentukan nilai N:"))
# T = [0 for i in range (N)]


# for i in range (N):
#     T[i] = int(input("Masukkan elemen T ke-" + str(i+1) + " : "))

# print("T =", T)

# X = int(input("Tentukan nilai X:"))
# for j in range (N):
#     if T[j] == X:
#         pertama.append(j)
#         Ada = True

# if Ada == False:
#     print("X tidak ditemukan di T")
# else:
#     print("X ditemukan pertama kali di indeks " + str(pertama[0]))

# T = [1,2,3,4,2,6]
# print(T.index(1))
# a = 1
# a+=1
# print(a)

# x = 10
# y = 1
# z = 100

# i = 1
# j = 1

# while ((x*i)+(y*j))<=z:
#     if ((i)*(y*j)<z):
#         i+=1
#     else:
#         j+=1

# if (((x*i)+(y*j))==z):
#     print(i)
#     print(j)
# else:
#     print("tidak mungkin")

# BanyakKata = int(input("Banyak kata: "))
# PanjangKata = int(input("Panjang kata: "))
# unique = []
# for i in range (BanyakKata):
#     for j in range (PanjangKata):
#         MasukkanKataKe = input("Masukkan kata ke-" + str(i+1) + ": ")
#         if MasukkanKataKe not in unique:
#             unique.append(MasukkanKataKe)
#         else:
#             print("Kata sudah ada")
#             break  

# halo = [1, "A", 4, "B", 6, "C", 8, "D", 10, "E"]
# print(halo[0])

# nama = input("Masukkan nama: ")
# print("Halo", nama)

hasil = ""
isi = input("Masukkan sebuah kata: ")
while(isi != "stop"):
    hasil += isi + " "
    isi = input("Masukkan sebuah kata: ")
print("Hasil kalimat: " + hasil)