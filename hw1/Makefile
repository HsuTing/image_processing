#argument
compiler = g++
extraLib = -I/usr/local/include/
extraMod = -L/usr/local/lib/
mods = -lopencv_core -lopencv_highgui -lopencv_imgcodecs -lopencv_imgproc -lopencv_videoio
libs = ReadImage.o DrawFrame.o Drawing.o ReadVideo.o ShowVideoTime.o

#start
all: $(libs) main.cpp
	$(compiler) -o main main.cpp $(libs) $(extraLib) $(extraMod) $(mods)

#part1.1
ReadImage.o: part1.1/ReadImage.cpp part1.1/ReadImage.h
	$(compiler) -c part1.1/ReadImage.cpp $(extraLib) 

#part1.2
DrawFrame.o: part1.2/DrawFrame.cpp part1.2/DrawFrame.h
	$(compiler) -c part1.2/DrawFrame.cpp $(extraLib)

#part1.3
Drawing.o: part1.3/Drawing.cpp part1.3/Drawing.h
	$(compiler) -c part1.3/Drawing.cpp $(extraLib)

#part2.1
ReadVideo.o: part2.1/ReadVideo.cpp part2.1/ReadVideo.h
	$(compiler) -c part2.1/ReadVideo.cpp $(extraLib)

#part2.2
ShowVideoTime.o: part2.2/ShowVideoTime.cpp part2.2/ShowVideoTime.h
	$(compiler) -c part2.2/ShowVideoTime.cpp $(extraLib)

clean:
	rm *.o
