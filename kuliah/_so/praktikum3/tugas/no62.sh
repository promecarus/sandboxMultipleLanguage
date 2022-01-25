#! /usr/bin/bash
badChars="[ + - { ;  \ = ? ~ ( ) < > & * | $ ]"
FILES=$(ls *.txt)

for FILE in $FILES
do
    while read -n 1 char
    do  
        for badChar in $badChars
        do
            if [ "$char" == "$badChar" ]
            then
                echo "$FILE has a bad character in it"
                rm $FILE
                echo "$FILE has been deleted"
                echo " "
            fi
        done
    done < "./$FILE"
done