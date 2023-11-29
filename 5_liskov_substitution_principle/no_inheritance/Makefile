targets = no_inheritance.app
OBJS := no_inheritance.o Rectangle.o Square.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

no_inheritance.o: no_inheritance.cpp
Rectangle.o: Rectangle.cpp Rectangle.hpp
Square.o: Square.cpp Square.hpp


.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)