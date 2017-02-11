include ../../config.mk

OBJECTS = PasswordField.o

all: $(OBJECTS)

$(OBJECTS): %.o: %.cpp
	$(CC) -c $< -o $@
	cp *.o $(BUILD)

clean:
	rm -f *.o
