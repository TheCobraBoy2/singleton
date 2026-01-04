# This runs any tests inside the test directory

CXX = g++
CXXFLAGS = -std=c++23 -Wall -Wextra -Werror
INCLUDES = -I.
SRCS := $(wildcard test/*.cpp)
TARGET = test/test
all: $(TARGET)
		 @echo ""
		 @echo "Test Beginning"
		 @./$(TARGET)
		 @echo ""
		 @echo "Test Ended"
		 @echo ""
		@rm -f test/test test/test.exe
$(TARGET):
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(SRCS) -o $(TARGET)
clean:
	rm -f test/test test/test.exe
.PHONY: all clean
