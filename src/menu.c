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

/*
 * Function: initial_choice
 * ------------------------
 * Prompts the user to input a choice for the data type they want to represent in binary.
 * Reads the user input and validates it. If the input is not within the valid range
 * (1 to 7), prompts the user again until a valid choice is entered.
 *
 * Returns:
 *     int: The user's choice representing the selected data type.
 */
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

/*
 * Function: menu
 * --------------
 * Handles the menu logic based on the user's choice.
 * Takes the user's choice as input and performs the corresponding action.
 * Displays a prompt to enter a value of the selected data type and reads the value.
 * Calls the appropriate print_binary function to print the binary representation of the value.
 *
 * Parameters:
 *     choice (int): The user's choice representing the selected data type.
 */
void menu(int choice)
{
    int scf_chk;
    switch (choice)
    {
        case 1:
            int buf;
            char num;
            printf("Enter a char: ");
            scf_chk = scanf("%d", &buf);
            validate_scan(scf_chk);
            num = (char) buf;
            print_binary(num, sizeof(num) * 8);
            break;
        case 2:
            short short_num;
            printf("Enter a short: ");
            scf_chk = scanf("%hd", &short_num);
            validate_scan(scf_chk);
            print_binary(short_num, sizeof(short_num) * 8);
            break;
        case 3:
            int int_num;
            printf("Enter an integer: ");
            scf_chk = scanf("%d", &int_num);
            validate_scan(scf_chk);
            print_binary(int_num, sizeof(int_num) * 8);
            break;
        case 4:
            long long_num;
            printf("Enter a long: ");
            scf_chk = scanf("%ld", &long_num);
            validate_scan(scf_chk);
            print_binary(long_num, sizeof(long_num) * 8);
            break;
        case 5:
            long long longl_num;
            printf("Enter a long long: ");
            scf_chk = scanf("%lld", &longl_num);
            validate_scan(scf_chk);
            print_binary(longl_num, sizeof(longl_num) * 8);
            break;
        case 6:
            float float_num;
            printf("Enter a float: ");
            scf_chk = scanf("%f", &float_num);
            validate_scan(scf_chk);
            print_binary(*((unsigned int*)&float_num), sizeof(float_num) * 8);
            break;
        case 7:
            double double_num;
            printf("Enter a double: ");
            scf_chk = scanf("%lf", &double_num);
            validate_scan(scf_chk);
            print_binary(*((unsigned long long*)&double_num), sizeof(double_num) * 8);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

}
