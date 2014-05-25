TEST = SimpleIMLib_Test
CC=g++
CFLAGS=
INCLUDES=
LFLAGS=
SRCS =  *.cpp

CFLAGS += -I. -I./gtest-1.7.0/include
LFLAGS += -L/opt/local/lib -L./gtest-1.7.0/make -L. -lgtest_main

COMMONOBJS = Image2D.o

MAINOBJ = main.o
TESTOBJ = SimpleIMLib_Test.o

all: $(TEST) executeTest

$(MAIN):  $(MAINOBJ) $(COMMONOBJS)
	$(CC) $(MAINOBJ) $(COMMONOBJS) -o $(MAIN) $(LFLAGS)

$(TEST):  $(TESTOBJ) $(COMMONOBJS)
	$(CC) $(TESTOBJ) $(COMMONOBJS) -o $(TEST) $(LFLAGS)
.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<

clean:
	rm -f *.o *~ $(MAIN)

executeTest:
	./SimpleIMLib_Test