targets = ng_invaritants.app
OBJS := ng_invaritants.o Parent.o Child.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

ng_invaritants.o: ng_invaritants.cpp
Parent.o: Parent.cpp Parent.hpp
Child.o: Child.cpp Child.hpp


.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)