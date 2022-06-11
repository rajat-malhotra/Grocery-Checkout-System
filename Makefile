CXX = g++
CXXFLAGS = -g -std=c++14 -Wall -MMD
EXEC = checkoutprogram
OBJECTS = main.o PricingRules.o checkout.o 
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
