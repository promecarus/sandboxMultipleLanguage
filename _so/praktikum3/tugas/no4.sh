#! /bin/bash
# Tuliskan sebuah program dan terdapat kontrol dimana yang bisa mengeksekusi program tersebut hanyalah 'root'

clear

# kontrol agar program yang ada di bawah ini hanya bisa dijalankan oleh root
if [ ! "`whoami`" = "root" ]; then
    echo -e "Program ini sedang dijalankan sebagai `whoami`.\nSilakan jalankan program ini sebagai root [sudo sh $0].\n"
    read -p "Tekan sebuah tombol..." -n1
    clear
    exit
fi

# program yang akan berjalan jika dijalankan oleh root
while true; do
    clear
    echo    "+------------------------------------+"
    echo    "|         Program kalkulator         |"
    echo    "+------------------------------------+"

    read -p " Masukkan angka pertama: " ANGKA1
    read -p " Masukkan angka kedua  : " ANGKA2

    echo    " Hasil penjumlahan: $ANGKA1 + $ANGKA2 = `expr $ANGKA1 + $ANGKA2`"
    echo    " Hasil pengurangan: $ANGKA1 - $ANGKA2 = `expr $ANGKA1 - $ANGKA2`"
    echo    " Hasil perkalian  : $ANGKA1 * $ANGKA2 = `expr $ANGKA1 \* $ANGKA2`"
    echo    " Hasil pembagian  : $ANGKA1 / $ANGKA2 = `expr $ANGKA1 / $ANGKA2`"
    echo    " Hasil sisa bagi  : $ANGKA1 % $ANGKA2 = `expr $ANGKA1 % $ANGKA2`"
    
    konfirmasi() {
        read -p " Apakah anda ingin melanjutkan program?(y/n): " YN
        case $YN in
            [Yy]* ) continue;;
            [Nn]* ) clear; exit;;
            * ) clear; echo " Pilihan tidak ada"; konfirmasi;;
        esac
    }
    konfirmasi;
done