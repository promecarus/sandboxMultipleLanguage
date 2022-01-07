#! /bin/bash
# Cetak variabel i = 1 to 20, dengan ketentuan 1..10 jalan pada backround sehingga outputnya:
# 11 12 13 14 15 16 17 18 19 20
# 1  2  3  4  5  6  7  8  9  10

clear
for i in $(seq 1 20); do
    if [ "$i" -gt 10 ]; then
        echo -n "$i "
    fi
done
echo ""