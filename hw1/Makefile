#argument
compiler = g++
extraLib = -I/usr/local/include/
extraMod = -L/usr/local/lib/
mods = -lopencv_core -lopencv_highgui -lopencv_imgcodecs
libs = ReadImage.o

#start
all: $(libs) main.cpp
	$(compiler) -o main main.cpp $(libs) $(extraLib) $(extraMod) $(mods)

#part1.1
ReadImage.o: part1.1/ReadImage.cpp part1.1/ReadImage.h
	$(compiler) -c part1.1/ReadImage.cpp $(extraLib) 

clean:
	rm *.o
