sudo cp -r data/ /usr/local/bin/
sudo chown -R $USER:$USER  /usr/local/bin/data/

sudo chown -R $USER:$USER /usr/local/bin/data/*.bin  /usr/local/bin/data/*.xml
sudo ldconfig
