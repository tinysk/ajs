TARGET := ajs
INCLUDEDIR := ./src/ 
SRC := $(wildcard src/*.cpp)
CFLAGS := -g -O0

all: $(TARGET) 

$(TARGET) : $(SRC)	
	g++ $(CFLAGS) -I $(INCLUDEDIR) $(SRC) -o $@ 

clean:
	rm -rf ajs *.o
