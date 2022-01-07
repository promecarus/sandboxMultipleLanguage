#!/bin/bash
clear
if grep "root" /etc/passwd 
    then 
    echo "disini ada user yang bernama root" 
    else 
    echo "user tersebut tidak ada"
fi