cxx = g++

cc = g++

all: main

main: C116menu.o Customer.h account.h saving.h checking.h cd.h

SavingsAccs: Accounts.h Saving.h

CheckingAccs: Accounts.h Checking.h

CDInterest: Accounts.h CD.h

C116Menu: all


clean : rm - rf *o main
