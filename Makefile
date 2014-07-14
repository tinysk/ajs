TARGET := ajs
INCLUDEDIR := ./src/ 
LOCAL_SRC_FILE := src \
		src/parser

SRC := $(foreach f, $(LOCAL_SRC_FILE), $(wildcard $(f)/*.cpp))

SRC := $(filter-out src/Hash.cpp, $(SRC))

d-%:
@echo "src = $(SRC)"

CFLAGS := -Wall -g -O0

all: $(TARGET) 

$(TARGET) : $(SRC)	
	g++ $(CFLAGS) -I $(INCLUDEDIR) $(SRC) -o $@ 

clean:
	rm -rf ajs *.o
