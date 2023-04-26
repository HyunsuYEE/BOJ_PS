CXXFLAGS += -Wall -std=c++17 -g
SANFLAGS = -fsanitize=address
LDFLAGS += $(SANFLAGS)
main:   main.o
	$(CXX) -o $@ $^ $(LDFLAGS)