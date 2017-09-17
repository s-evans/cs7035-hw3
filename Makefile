
OBJECTS := $(subst .cpp,.o,$(wildcard *.cpp))

CXX_FLAGS := -MD -Wall -Wextra 
LD_FLAGS :=

all: $(OBJECTS)

%.o: %.cpp
	$(CXX) $< -o $@ -lgmpxx -lgmp

clean:
	rm *.o

-include $(OBJECTS:.o=.d)
