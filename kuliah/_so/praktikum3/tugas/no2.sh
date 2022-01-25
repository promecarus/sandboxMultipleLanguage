#! /bin/bash
# Buat skrip untuk merubah input lowercase menjadi uppercase
 
clear
read -p "Masukkan sebuah kata atau kalimat : " STRING
echo -n "Hasil perubahan kata atau kalimat : "
echo "$STRING" | tr [a-z] [A-Z]