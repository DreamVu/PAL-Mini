#!/bin/bash

source ./dreamvu_ws/bin/activate

./run

File1=Res2.png 
File2=data/fcm/fcm_0.bin
File3=data/er.bin

validated=false

if test -f "$File1"; then  
    cp unit.txt /data5/lut/  
    cp unit.txt ../data5/lut/
    cp Res2.png /data5/lut/
    cp Res2.png ../data5/lut/
	rm *.png unit.txt data.zip
	rm -rf data/*.png
	validated=true    
fi

if test -f "$File2"; then         
    cp -r data/fcm ../data5/fusion/
    cp -r data/fcm /data5/fusion/
    rm -rf data/fcm
fi

if test -f "$File3"; then         
    cp data/er.bin /data5/lut/
    cp data/er.bin ../data5/lut/
    rm -rf data/er.bin	
    rm -rf data/      
fi       

if $validated; then  
echo "[PAL:INFO] Camera data files are installed successfully." 
fi
 




