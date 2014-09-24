all:
	g++ -c -fPIC LongNumb.cpp
	g++ -shared -o libLongNumb.so LongNumb.o
	LD_LIBRARY_PATH=./ g++ main.cpp -lLongNumb -I. -Wl,-rpath,. -L. -o TCHMK_2
windows:
	g++ -c LongNumb.cpp
	g++ -shared -o LongNumb.dll LongNumb.o
	g++ main.cpp LongNumb.dll -I. -Wl,-rpath,. -L. -o TCHMK_2.exe
