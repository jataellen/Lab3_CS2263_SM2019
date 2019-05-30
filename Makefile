#########################################
# Created by Jata MacCabe, Jeremy Robichaud
##########################################

# compile with gcc, change this to clang if you prefer
COMPILER = gcc

# The C flags to pass to gcc
C_FLAGS = -Wall -Wextra

# link our .o files to make an executable
LinkedList: LinkedList.o
	$(COMPILER) $(C_FLAGS) -o LinkedList LinkedList.o

# compile the `Stack.o` file
LinkedList.o: LinkedList.c
	$(COMPILER) $(C_FLAGS) -c LinkedList.c

##############################
# the test cases
test: test1 test2 test3

test1: LinkedList
	./LinkedList < data/test1.input > test1.result
	./TestPassed.sh test1.result data/test1.expected

test2: LinkedList
	./LinkedList < data/test2.input > test2.result
	./TestPassed.sh test2.result data/test2.expected

test3: LinkedList
	./LinkedList < data/test3.input > test3.result
	./TestPassed.sh test3.result data/test3.expected
