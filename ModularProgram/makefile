#all : prompt executable

#prompt :
#	echo "开始编译..."

objects = main.o point.o student.o line.o date.o family.o complex.o
executable : $(objects)
	g++ -o executable $(objects)
	@echo 完成编译...

main.o point.o : point.h
student.o : student.h date.h
line.o : line.h
date.o : date.h
family.o : family.h
complex.o : complex.h
#$(objects): point.h student.h date.h line.h date.h family.h complex.h

.PHONY : clean
clean :
	-rm executable $(objects)
	@echo 删除临时文件...
