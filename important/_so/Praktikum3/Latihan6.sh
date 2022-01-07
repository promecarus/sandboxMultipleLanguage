#!/bin/bash 
clear 
echo "komputer anda telah menyala selama `uptime`" 
echo "jumlah user yang login sebanyak `who | wc -l` user" 
echo "anda login dengan user $LOGNAME" 
echo "di shell $SHELL"