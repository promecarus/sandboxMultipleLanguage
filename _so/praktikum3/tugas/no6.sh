#! /bin/bash
# Buat program yang menghapus file disebuah direktori jika file itu mengandung bad karakter (/[\+\{\;\"\\\=\?~\(\)\<\>\&\*\|\$]\}\`)

# penghitungan mundur sebelum file dihapus, user masih bisa membatalkannya dalam waktu 10 detik
for (( i=10; i>-1; i-- )); do
    clear
    echo -e "Semua file yang mengandung bad karakter akan dihapus dalam $i detik.\n[Tekan CTRL+C untuk membatalkan]"
    sleep 1
done

clear
FILES=$(ls *.*)
for FILE in $FILES; do
    if [[ $FILE =~ [^[:alnum:]] && ! $FILE =~ [on] ]]; then
        echo "File "$FILE" mengandung bad karakter"
        rm $FILE
        echo "File "$FILE" telah dihapus"
    fi
done