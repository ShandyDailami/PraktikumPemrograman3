jariJariBejana = float(input("Masukkan jari-jari bejana: "))
tinggiBejana = float(input("Masukkan tinggi bejana: "))
phi = 22/7
volume = phi * jariJariBejana**2 * tinggiBejana 
luas = 2 * phi * jariJariBejana * (jariJariBejana + tinggiBejana)
keliling = 2 * phi * jariJariBejana
print("Volume = {:.2f}".format(volume))
print("Luas = {:.2f}".format(luas))
print("Keliling = {:.2f}".format(keliling))