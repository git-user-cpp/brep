#include "menu.h"

int main(void) {
    int choice;

    choice = initial_choice();
    menu(choice);
    
    return 0;
}
