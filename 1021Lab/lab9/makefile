#Joseph Barton
#CPSC 1021-004, F16
#Lab 9
#jbarto3

money_t: money.cpp driver.cpp
			g++ -Wall money.cpp driver.cpp -o Money

run:	Money
			./Money

clean:
			rm Money
			rm *.o
package:
			tar -cvzf lab9.tar.gz makefile money.h money.cpp driver.cpp
