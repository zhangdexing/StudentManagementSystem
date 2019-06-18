TARGET = 1 
#OBJ = main.o func.o
SRC = main.c func.c callback.c
GCC_TOOL = gcc





#$(BOJ):$(SRC)
	
#	    $(GCC_TOOL)  $(SRC)  -c -o  $(OBJ) -Wall

$(TARGET):$(SRC)

	    $(GCC_TOOL)  $(SRC) -o  $(TARGET) -Wall

%.o:%.c
	$(GCC_TOOL) -o  $@   $^



clean:
	rm  $(TARGET)  *.o
