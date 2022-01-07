#! /bin/bash
# Buat skrip untuk merubah input lowercase menjadi uppercase
 
clear
read -p "Masukkan sebuah kata atau kalimat : " string
echo -n "Hasil perubahan kata atau kalimat : "
echo "$string" | tr [a-z] [A-Z]