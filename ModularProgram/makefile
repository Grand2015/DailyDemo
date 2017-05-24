executable : main.o point.o student.o line.o date.o family.o
	g++ -o executable main.o point.o student.o line.o date.o family.o
main.o : main.cpp point.h
	gcc -c main.cpp
point.o : point.cpp point.h
	gcc -c point.cpp
student.o : student.cpp student.h
	gcc -c student.cpp
line.o : line.cpp line.h
	gcc -c line.cpp
date.o : date.cpp date.h
	gcc -c date.cpp
family.o : family.cpp family.h
	gcc -c family.cpp

.PHONY : clean
clean :
	rm executable main.o point.o student.o line.o date.o family.o
