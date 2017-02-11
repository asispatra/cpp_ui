include ../../config.mk

OBJECTS = Container.o

all: $(OBJECTS)

$(OBJECTS): %.o: %.cpp
	$(CC) -c $< -o $@
	cp *.o $(BUILD)

clean:
	rm -f *.o
