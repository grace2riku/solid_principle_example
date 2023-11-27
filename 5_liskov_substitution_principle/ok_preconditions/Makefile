targets = ok_preconditions.app
OBJS := ok_preconditions.o Parent.o Child.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

ok_preconditions.o: ok_preconditions.cpp
Parent.o: Parent.cpp Parent.hpp
Child.o: Child.cpp Child.hpp


.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)