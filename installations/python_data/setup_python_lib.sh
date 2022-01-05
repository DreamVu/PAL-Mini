cd bin_files
sudo cp depth_hq1.bin depth_hq2.bin dualenet.bin pd_d4.bin /usr/local/bin
sudo cp depth.bin /usr/local/bin
sudo chown -R $USER:$USER /usr/local/bin/depth*.bin /usr/local/bin/dualenet.bin  /usr/local/bin/pd_d4.bin
sudo ldconfig
cd ..
