targets = ok_lsp_add_impl_sub_class.app
OBJS := ok_lsp_add_impl_sub_class.o Rectangle.o Square.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

ok_lsp_add_impl_sub_class.o: ok_lsp_add_impl_sub_class.cpp
Rectangle.o: Rectangle.cpp Rectangle.hpp Shape.hpp
Square.o: Square.cpp Square.hpp Shape.hpp

.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)