#all: eggs.a eggs.so eggs

#eggs.o:
	#gcc -I includes -fPIC -c main.c -o eggs.o

#eggs.a: eggs.o
	#ar rcs eggs.a eggs.o

#eggs.so: eggs.o
	#gcc -I includes -shared eggs.o -o eggs.so

#eggs: eggs.o
	#gcc -I includes eggs.o -o eggs

#clean:
	#rm -f *.o *.a *.so *.out main eggs

PWD := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
FLAGS := -fPIC
INCLUDES := -I $(PWD)/include

OUTPUT := eggs.a eggs.so eggs
OBJECTS := eggs.o

all: $(OUTPUT)

install: $(OUTPUT)
	echo "HERE $(EXTERNAL_INCLUDES)"
	echo "QUICK BROWN FOX $(EXTERNAL_LIBRARIES)"
	mkdir -p $(OUTPUT_DIR)
	cp $(OUTPUT) $(OUTPUT_DIR)

clean:
	rm -f $(OBJECTS) $(OUTPUT)

$(OUTPUT): $(OBJECTS)
	gcc -o $@ $^

%.o: $(PWD)/src/%.c
	gcc $(INCLUDES) $(FLAGS) -c -o $@ $^

%.so: $(PWD)/src/%.o
	gcc $(INCLUDES) -shared -o $@ $^

%.a: $(PWD)/src/%.o
	ar rcs $@ $^
