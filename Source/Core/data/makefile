# Declaration of variables
CC = g++ -std=c++0x
CC_FLAGS = -w -I /usr/local/Cellar/antlr4-cpp-runtime/4.7.1/include/antlr4-runtime
LIBS = -lm

 
# File names
EXEC = run
SOURCES = $(wildcard *.cpp)
SOURCES += $(wildcard Definitions/*.cpp)
SOURCES += $(wildcard Expressions/*.cpp)
SOURCES += $(wildcard init_decl/*.cpp)
SOURCES += $(wildcard Instructions/*.cpp)
SOURCES += $(wildcard Structure/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

# Main target
$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC) $(LIBS)

# To obtain object files
%.o: %.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@
 
# To remove generated files
clean:
	rm -f $(EXEC) $(OBJECTS)