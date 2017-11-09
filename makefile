objects = main.o TextQuery.o

run:$(objects)
	g++ -o $(objects)

main.o:TextQuery.o
TextQuery.o:

.PHONY:clean

clean:
	rm run$(objects)
