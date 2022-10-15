import math
tinggi = float(input("Masukkan tinggi: "))
miring = float(input("Masukkan miring: "))
alas = math.sqrt(miring * miring - tinggi * tinggi)
keliling = tinggi + miring + alas
luas = 0.5 * alas * tinggi
print("Alas =", round(alas), "cm")
print("Tinggi =", round(tinggi), "cm")
print("Keliling =", round(keliling), "cm")
print("Luas =", round(luas), "cm^2")
