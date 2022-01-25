#!/bin/bash 
TITEL="Membuat Fungsi Sistem Informasi $HOSTNAME"
SAAT_INI=$(date+"%d %T %Z") 
UPD="Sistem ini di update oleh $USER pada tanggal $SAAT_INI"

function info_uptime(){ 
    echo "<h2>informasi uptime</h2>" 
    echo "<pre>"
    uptime 
    echo "</pre>" 
} 
cat <<- EOF 
<HTML> 
    <HEAD> 
        <TITLE>$TITEL</TITLE> 
    </HEAD> 
    <BODY> 
        <H1>$TITEL</H1> 
        <P>$UPD</P> 
        $(info_uptime) 
    </BODY> 
</HTML>
EOF