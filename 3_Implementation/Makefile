# Name of the project
PROJECT_NAME = Calculator

# Output directory
BUILD = build
##
# All source code files
SRC = src/operation.c\
src/trignometry.c\
src/Conversion.c\
test/test_calculator_opearations.c\
src/BMI.c\
unity/unity.c

# All test source files
TEST_SRC = src/operation.c\
src/trignometry.c\
src/Conversion.c\
test/test_calculator_opearations.c\
src/BMI.c\
unity/unity.c

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).exe

# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
INCLUDE_LIBS =

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).exe

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
<<<<<<< HEAD
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).exe
=======
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out -lm
>>>>>>> bed33888143e17642bee5c7e9377865d0eae6171

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).exe
	

# Document the code using Doxygen
#doc:
#	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lm
	./$(TEST_OUTPUT)

coverageCheck:$(BUILD)
	gcc -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lm
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
