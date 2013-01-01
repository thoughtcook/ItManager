CC=g++

Objects =  test.o desktop.o laptop.o pad.o computer.o

test: $(Objects)
	$(CC) $(Objects) -o test

$(Objects): computer.h
desktop.o: desktop.h
laptop.o: laptop.h
pad.o:  pad.h
test.o: desktop.h pad.h laptop.h

clean:
	@echo "cleanning project"
	-rm test *.o
	@echo "clean completed"

.PHONY: clean
