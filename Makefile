# Makefile for f2022, ecs36b
#
# g++ -std=c++14 test_GPS.cpp GPS.cpp -o test_GPS
#
# example: $ ./test_GPS 48.88 2.3

CC = g++ -std=c++14

CFLAGS = -g -I/opt/homebrew/include

#CFLAGS = -g

# CFLAGS = -g -D_ECS36B_HW7_ -I/usr/include/jsoncpp
# CFLAGS = -g -DNOT_RIGHT_NOW -I/usr/include/jsoncpp

# CFLAGS = -g -D_ECS36B_DEBUG_ -I/usr/include/jsoncpp
# CFLAGS = -g -Wall -Wstrict-prototypes
# CFLAGS = -O3


LDFLAGS = 	-L/opt/homebrew/include/lib -ljsoncpp

INC = ecs36b_Common.h
INC_CL = GPS.h Person.h Thing.h Time.h Record.h JvTime.h
OBJ = GPS.o Person.o Thing.o Time.o Record.o JvTime.o

# old: LDFLAGS = 	-lc++ -ljsoncpp

# LDFLAGS = 	-ljsoncpp -lmicrohttpd -ljsonrpccpp-common -ljsonrpccpp-server -lcurl -ljsonrpccpp-client


# rules.
all: 	main

#
#

GPS.o:		GPS.cpp GPS.h $(INC)
	$(CC) -c $(CFLAGS) GPS.cpp

#JvTime.o:	JvTime.cpp JvTime.h $(INC)
#	$(CC) -c $(CFLAGS) JvTime.cpp

Person.o:	Person.cpp Person.h $(INC)
	$(CC) -c $(CFLAGS) Person.cpp

ecs36b_JSON.o: ecs36b_JSON.cpp $(INC)
	$(CC) -c $(CFLAGS) ecs36b_JSON.cpp	

Thing.o:	Thing.cpp Thing.h $(INC)
	$(CC) -c $(CFLAGS) Thing.cpp

Record.o: 	Record.cpp Record.h $(INC) 
	$(CC) -c $(CFLAGS) Record.cpp

Time.o:		Time.cpp Time.h $(INC)
	$(CC) -c $(CFLAGS) Time.cpp

JvTime.o:	JvTime.cpp JvTime.h $(INC)
	$(CC) -c $(CFLAGS) JvTime.cpp

main.o:		main.cpp $(INC_CL)
	$(CC) -c $(CFLAGS) main.cpp

main:		main.o ecs36b_JSON.o $(OBJ)
	$(CC) -o  main main.o ecs36b_JSON.o $(OBJ) $(LDFLAGS)
clean:
	rm -f *.o *~ core Main
