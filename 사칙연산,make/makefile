


LIB_DIR = lib

OBJECTS = calculator.o

libshared.so.1.0.1 : $(OBJECTS)
		gcc -shared -Wl,-soname,libshared.so.1 -o libshared.so.1.0.1 $^
			ln -s libshared.so.1.0.1 libshared.so.1
				ln -s libshared.so.1.0.1 libshared.so

calculator.o : src/calculator.c  include/calculator.h
		gcc -c -fPIC $< -Iinclude -o $@

main_static: main.c $(OBJECTS)
		gcc -o main_static main.c $(OBJECTS) -Iinclude

main_shared: main.c libshared.so.1.0.1
		gcc -o main_shared main.c -Iinclude -L. -lshared

main_dynamic: main.c libshared.so.1.0.1
		gcc -o main_dynamic main.c -Iinclude -L. -lshared

clean :
		rm -f libshared.so.1.0.1 libshared.so.1 libshared.so $(OBJECTS) main_static main_shared main_dynamic























