# Build target
app: main.o arithmetic.o
	clang++ main.o arithmetic.o -o app

# Rules
main.o: main.cpp arithmetic.h
	clang++ -c main.cpp

arithmetic.o: arithmetic.cpp arithmetic.h
	clang++ -c arithmetic.cpp

# Cleanup
clean:
	rm -f *.o app
