targets = ok_exception.app
OBJS := ok_exception.o Parent.o Child.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

ok_exception.o: ok_exception.cpp
Parent.o: Parent.cpp Parent.hpp
Child.o: Child.cpp Child.hpp


.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)