targets = no_lsp_add_impl_sub_class.app
OBJS := no_lsp_add_impl_sub_class.o Rectangle.o Square.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

no_lsp_add_impl_sub_class.o: no_lsp_add_impl_sub_class.cpp
Rectangle.o: Rectangle.cpp Rectangle.hpp
Square.o: Square.cpp Square.hpp


.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)