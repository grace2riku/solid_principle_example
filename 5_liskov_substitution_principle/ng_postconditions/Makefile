targets = ng_postconditions.app
OBJS := ng_postconditions.o Parent.o Child.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

ng_postconditions.o: ng_postconditions.cpp
Parent.o: Parent.cpp Parent.hpp
Child.o: Child.cpp Child.hpp


.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)