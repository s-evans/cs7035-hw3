
OBJECTS := $(subst .cpp,.o,$(wildcard *.cpp))

CXX_FLAGS := -MD -Wall -Wextra -std=c++14
LD_FLAGS := -lgmp -lgmpxx -lstdc++

all: $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXX_FLAGS) $< -o $@ $(LD_FLAGS)

clean:
	rm -f *.o *.d

-include $(OBJECTS:.o=.d)
