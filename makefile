showfile: showfile.o
	g++ showfile.o -o showfile

showfile.o: showfile.cpp
	g++ -c showfile.cpp

clean:
	rm *.o showfile