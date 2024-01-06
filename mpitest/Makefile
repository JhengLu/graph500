CC=mpicc
CFLAGS=-Wall
TARGET=mpi_test

all: $(TARGET)

$(TARGET): mpi_test.c
	$(CC) $(CFLAGS) -o $(TARGET) mpi_test.c

clean:
	rm -f $(TARGET)

