#!/bin/bash
# skrip merubah inputan menjadi huruf besar
#   dan menampilkan hasilnya
read 
read -p "Enter first number: " a
read -p "Enter second number: " b
echo "Sum of $a and $b is $(("$a" + "$b"))"