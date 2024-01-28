CC = gcc 
AR = ar

FLAGS = -Wall -g


HEADER = NumClass.h

LOOPSo = basicClassification.o advancedClassificationLoop.o
RECURSIVESo = basicClassification.o advancedClassificationRecursion.o

LOOPSc = basicClassification.c advancedClassificationLoop.c
RECURSIVESc = basicClassification.c advancedClassificationRecursion.c

ALLc = basicClassification.c advancedClassificationLoop.c advancedClassificationRecursion.c main.c




all: loops recursives recursived loopd mains maindloop maindrec
	

loops: libclassloops.a 
libclassloops.a: $(LOOPSo) $(HEADER)
	$(AR) -rcs libclassloops.a $(LOOPSo)

recursives: libclassrec.a 
libclassrec.a: $(RECURSIVESo) $(HEADER)
	$(AR) -rcs libclassrec.a $(RECURSIVESo)


recursived: libclassrec.so
libclassrec.so:  $(RECURSIVESo) $(HEADER)
	$(CC)  -shared -o libclassrec.so $(RECURSIVESo)


loopd: libclassloops.so
libclassloops.so: $(LOOPSo) $(HEADER)
	$(CC)  -shared -o libclassloops.so $(LOOPSo)


mains: main.o libclassrec.a 
	$(CC) $(FLAGS) -o mains  libclassrec.a $(ALLc) 


maindloop: main.o 
	$(CC) $(FLAGS) -o maindloop ./libclassloops.so $(ALLc)


maindrec: main.o 
	$(CC) $(FLAGS) -o maindrec ./libclassrec.so $(ALLc) 




main.o: $(HEADER) $(All)
	$(CC) $(FLAGS) -c $(ALLc)




clean: 
	rm -f *.o *.a *.so *.out mains maindrec maindloop
