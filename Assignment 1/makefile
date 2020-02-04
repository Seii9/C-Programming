objects: main.o helper.o empManager.o deptManager.o assTable.o

	gcc -o edit $(objects)

	main.o : main.c
	helper.o : helper.c helper.h
	empManager.o : empManager.c empManager.h
	deptManager.o : deptManager.c deptManager.h
	assTable.o : assTable.c assTable.h
	clean :
		rm -f *.o
