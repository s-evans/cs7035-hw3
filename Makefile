
OBJECTS := $(subst .cpp,.o,$(wildcard *.cpp))

CXX_FLAGS := -MD -Wall -Wextra 
LD_FLAGS := -lgmpxx -lgmp

all: $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXX_FLAGS) $(LD_FLAGS) $< -o $@

clean:
	rm -f *.o *.d

-include $(OBJECTS:.o=.d)
