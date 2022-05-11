ARCH=$(uname -p)

if [ "$ARCH" = "x86_64" ]; then
	cat ../dreamvu_pal_navigation/cmake_template/x86_64/header.txt > ../dreamvu_pal_navigation/CMakeLists.txt
else
	cat ../dreamvu_pal_navigation/cmake_template/arm64/header.txt > ../dreamvu_pal_navigation/CMakeLists.txt
fi

echo "set(PAL_INCLUDE_DIR" `pwd`/../include ")" >> ../dreamvu_pal_navigation/CMakeLists.txt

if [ "$ARCH" = "x86_64" ]; then
	echo "set(PAL_LIBRARY" `pwd`/../lib/x86_64/libPAL.so ")" >> ../dreamvu_pal_navigation/CMakeLists.txt
else
	echo "set(PAL_LIBRARY" `pwd`/../lib/arm64/libPAL.so ")" >> ../dreamvu_pal_navigation/CMakeLists.txt
fi

if [ "$ARCH" = "x86_64" ]; then
	cat ../dreamvu_pal_navigation/cmake_template/x86_64/footer.txt >> ../dreamvu_pal_navigation/CMakeLists.txt
else
	cat ../dreamvu_pal_navigation/cmake_template/arm64/footer.txt >> ../dreamvu_pal_navigation/CMakeLists.txt
fi
