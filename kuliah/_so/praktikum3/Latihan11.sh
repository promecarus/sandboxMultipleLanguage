#!/bin/bash
data="halo ini bejo"
sdata=${data#*lo} 
echo $sdata 
tdata=${data%be*} 
echo $tdata