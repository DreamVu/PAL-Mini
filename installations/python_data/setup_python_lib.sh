sudo cp -r data/ /usr/local/bin/
sudo chown -R dreamvu:dreamvu  /usr/local/bin/data/

sudo chown -R dreamvu:dreamvu /usr/local/bin/data/*.bin  /usr/local/bin/data/*.xml
sudo ldconfig
