#! /bin/bash
# Buat program yang menghapus file disebuah direktori jika file itu mengandung bad karakter (/[\+\{\;\"\\\=\?~\(\)\<\>\&\*\|\$]\}\`)

# FILES=$(ls *.*)
# BADCHARS=([ \ + \ { \ ; \ " \ \ \ = \ ? ~ \ ( \ ) \ < \ > \& \ * \ | \ $ ] \ } \ `)
# for FILE in $FILES; do
#     if [[ $FILE =~ [\+\{\;\"\\\=\?~\(\)\<\>\&\*\|\$]\}\` ]]; then
#         rm -r $FILE
#     fi
# done

FILES=($(ls *\#*) $(ls *&*))
echo $FILES