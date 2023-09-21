CXX = c++

EXECUTABLE = petShop

OBJS = VirtualPet.o Pokemon.o petShop.o Pikachu.o Digimon.o Gatomon.o

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CXX) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXECUTABLE)
