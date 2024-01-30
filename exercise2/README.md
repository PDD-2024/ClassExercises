To run:
g++ -c bank.cpp -o bank.o
g++ -c company.cpp -o company.o
g++ -c circularEconomy.cpp -o circularEconomy.o
g++ bank.o circularEconomy.o -o main
./main