CC=gcc

CFLAGS=-Iinc

SRC=src/main.c src/voltage_monitor.c

TARGET=bms

all:
	$(CC) $(SRC) $(CFLAGS) -o $(TARGET)

clean:
	rm -f $(TARGET)
