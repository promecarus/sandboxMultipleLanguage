#! /bin/bash
# Buat program yang mematikan dirinya sendiri

while true; do
    clear
    read -p "Masukkan angka untuk hitungan mundur mematikan program: " ANGKA
    if [ $ANGKA -lt 1 ]; then
        clear
        echo "Angka yang anda masukkan tidak boleh negatif atau nol, minimal 1"
        sleep 2
    else
        for (( i=$ANGKA; i>-1; i-- )); do
            clear
            echo -n "Program akan mati dalam $ANGKA detik"
            sleep 1
            ANGKA=$((ANGKA-1))
            if [ $ANGKA -eq -1 ]; then
                clear
                kill -9 $$
            fi
        done
    fi
done