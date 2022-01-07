#!/bin/bash 
clear 
data=$(date +%D)
jumlah=$(who | wc -l)
echo "tanggal $data ada $jumlah user yang login"