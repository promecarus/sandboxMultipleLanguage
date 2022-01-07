#!/bin/bash 
let data1 data2 hasil 
read --p "masukkan sebuah angka : " 
data1=$REPLY 
read --p "masukkan sebuah angka lagi : " 
data2=$REPLY 
((hasil=data1-data2)) 
echo "hasil dari $data1 - $data2 adalah $hasil " 
unset data1 data2 hasil