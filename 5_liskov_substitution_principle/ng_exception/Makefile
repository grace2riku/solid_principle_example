targets = ng_exception.app
OBJS := ng_exception.o Parent.o Child.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

ng_exception.o: ng_exception.cpp
Parent.o: Parent.cpp Parent.hpp
Child.o: Child.cpp Child.hpp


.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)