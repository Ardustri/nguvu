CC=llvm-gcc
CFLAGS=-c -g -IOpenCL -I include
LDFLAGS=-g -IOpenCL -I include
SRC = ${wildcard src/*.c}
HDR = ${wildcard include/*.h}
OBJ = ${SRC:.c=.o}
EXEC = nvn

all: ${SRC} ${OBJ} ${EXEC}

debug: all
debug: CFLAGS += -DDEBUG

${EXEC}: ${OBJ}
	${CC} ${LDFLAGS} $^ -o $@

%.o: %.c ${HDR}
	${CC} ${CFLAGS} $< -o $@

clean:
	rm -rf src/*.o ${EXEC}
