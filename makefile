include config.mk

SOURCES = ui/CharMap ui/MsgBox ui/Window ui/Button ui/ComboBox ui/Component ui/conio ui/Container ui/Dimension ui/Panel ui/Point ui/Screen ui/TextBox ui/TextArea ui/PasswordField ui/Menu

UI_OBJECT = $(BUILD)/*.o

OBJECTS = $(UI_OBJECT)  

all: COMPILE LINK

COMPILE:
	 mkdir $(BUILD); \
	 for d in $(SOURCES); \
		do \
		$(MAKE) --directory=$$d ; \
		done

LINK:
	g++ -shared -o $(LIB) $(OBJECTS)  

clean:
	for d in $(SOURCES); \
	do \
	$(MAKE) --directory=$$d clean; \
	done
	rm -f $(BUILD)/*
	rmdir $(BUILD)
