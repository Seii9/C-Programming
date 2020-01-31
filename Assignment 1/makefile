objects: main.o helper.o empManager.o

	gcc -o edit $(objects)

	main.o: main.c
	helper.o: helper.c helper.h
	empManager.o: empManager.c empManager.h
	deptManager.o: deptManager.c deptManager.h
	clean:
				rm main.o helper.o empManager.o
