all : prompt executable

prompt :
	@echo [...]Start compiling...
	@echo [...]Start creating object files...

objects = main.o point.o student.o line.o date.o family.o complex.o box.o \
intArray.o
executable : $(objects)
	@echo [...]Start building the executable file...
	g++ -o executable $(objects)
	@echo [...]Compiled successfully...

main.o point.o : point.h
student.o : student.h date.h
line.o : line.h
date.o : date.h
family.o : family.h
complex.o : complex.h
box.o : box.h
intArray.o : intArray.h
#$(objects): point.h student.h date.h line.h date.h family.h complex.h

.PHONY : clean
clean :
	-rm executable $(objects)
	@echo [...]Deleted cache files successfully...
