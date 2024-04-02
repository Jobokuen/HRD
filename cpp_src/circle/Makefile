# main : main.o Circle.o Circle.h
# 	g++ -o main main.o Circle.o
# 	g++ -c main.cpp Circle.cpp

# clean :
# 	rm -rf main 

main : Circle.o main.o
	g++ Circle.o main.o -o main

Circle.o : Circle.cpp
	g++ -c Circle.cpp

main.o : main.cpp
	g++ -c main.cpp

clean :
	rm *.o
	rm -rf main