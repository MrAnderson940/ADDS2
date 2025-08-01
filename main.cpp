#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main(){
    Referee r;
    Human h1("Owen"), h2;
    Computer c;
    r.refGame(&h1, &c);
    return 0;
}