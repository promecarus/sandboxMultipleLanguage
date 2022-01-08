#! /bin/bash
# Tuliskan sebuah program dan terdapat kontrol dimana yang bisa mengeksekusi program tersebut hanyalah 'root'

# kontrol agar program yang ada di bawah ini hanya bisa dijalankan oleh root
clear
if [ ! "`whoami`" = "root" ]; then
    echo -e "Program ini sedang dijalankan sebagai `whoami`.\nSilakan jalankan program ini sebagai root(sudo sh $0)"
    # $0 is not running as root. Try using sudo."
    # echo "Press a key. . ." ; read ;
    read -p "Tekan enter untuk keluar..." -n1
    clear
    exit
fi

# program yang akan dijalankan jika dijalankan oleh root
while true; do
    clear
    echo "+------------------------------------+"
    echo "|         Program kalkulator         |"
    echo "+------------------------------------+"

    read -p " Masukkan angka pertama: " ANGKA1
    read -p " Masukkan angka kedua  : " ANGKA2

    echo    " Hasil penjumlahan: $ANGKA1 + $ANGKA2 = `expr $ANGKA1 + $ANGKA2`"
    echo    " Hasil pengurangan: $ANGKA1 - $ANGKA2 = `expr $ANGKA1 - $ANGKA2`"
    echo    " Hasil perkalian  : $ANGKA1 * $ANGKA2 = `expr $ANGKA1 \* $ANGKA2`"
    echo    " Hasil pembagian  : $ANGKA1 / $ANGKA2 = `expr $ANGKA1 / $ANGKA2`"
    echo    " Hasil sisa bagi  : $ANGKA1 % $ANGKA2 = `expr $ANGKA1 % $ANGKA2`"
    echo -n "Apakah anda ingin melanjutkan program?(y/n): "
    read LANJUT

    case $LANJUT in
        1)  echo "Today is $(date)";                            echo "Press a key. . ." ; read ;;
        2)  echo "Files in $(pwd)";                             echo "Press a key. . ." ; read ;;
        3)  cal;                                                echo "Press a key. . ." ; read ;;
        4)  vi ;;
        5)  exit 0 ;;
        *)  echo "Opps!!! Please select choice berween 1 to 5"; echo "Press a key. . ." ; read ;;
    esac
done