#!/bin/bash
if grep "root" /etc/passwd 
    then 
    clear
    echo "disini ada user yang bernama root" 
    else 
    echo "user tersebut tidak ada"
fi