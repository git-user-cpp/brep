/*
 * binary representator written in C
 * Copyright (C) 2024  Andrew Kushyk
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "menu.h"
#include "fun.h"

int initial_choice(void) {
    int choice;
    int scf_chk;

    while(1) {
        printf("Enter 1 for char, 2 for short, 3 for int, 4 for long, 5 for long long, 6 for float, 7 for double: ");
        scf_chk = scanf("%d", &choice);
        if(scf_chk == 1 && (choice > 0 && choice < 8))
            break;
        printf("Error: wrong option\n");
    }

    return choice;
}

void menu(int choice) {
    int scf_chk;

    if(choice == 1) {
        int buf;
        char num;
        printf("Enter a char: ");
        scf_chk = scanf("%d", &buf);
        validate_scan(scf_chk);
        num = (char) buf;
        print_binary(num, sizeof(num) * 8);
    } else if(choice == 2) {
        short num;
        printf("Enter a short: ");
        scf_chk = scanf("%hd", &num);
        validate_scan(scf_chk);
        print_binary(num, sizeof(num) * 8);
    } else if(choice == 3) {
        int num;
        printf("Enter an integer: ");
        scf_chk = scanf("%d", &num);
        validate_scan(scf_chk);
        print_binary(num, sizeof(num) * 8);
    } else if(choice == 4) {
        long num;
        printf("Enter a long: ");
        scf_chk = scanf("%ld", &num);
        validate_scan(scf_chk);
        print_binary(num, sizeof(num) * 8);
    } else if(choice == 5) {
        long long num;
        printf("Enter a long long: ");
        scf_chk = scanf("%lld", &num);
        validate_scan(scf_chk);
        print_binary(num, sizeof(num) * 8);
    } else if(choice == 6) {
        float num;
        printf("Enter a float: ");
        scf_chk = scanf("%f", &num);
        validate_scan(scf_chk);
        print_binary(*((unsigned int*)&num), sizeof(num) * 8);
    } else if(choice == 7) {
        double num;
        printf("Enter a double: ");
        scf_chk = scanf("%lf", &num);
        validate_scan(scf_chk);
        print_binary(*((unsigned long long*)&num), sizeof(num) * 8);
    } else {
        printf("Invalid choice.\n");
    }
}
