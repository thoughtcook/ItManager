test: test.o desktop.o laptop.o pad.o computer.o
	g++ test.o desktop.o laptop.o computer.o pad.o -o test

clean:
	@echo "cleanning project"
	-rm test *.o
	@echo "clean completed"

.PHONY: clean
