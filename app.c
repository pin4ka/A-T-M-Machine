#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include "machine.c"
void welcome();
int language_choice();
void atm_pin_change(int account_number, int pin, int new_pin);
void Genarate_Pin(int account_number, int phone_number, int debit_card, int pin);
void Cash_withdraw(int account_number, int pin, int amount);
void Balance_check();

int main()
{
    char user_name[] = "rax";
    int pin = 5566, cache;

    // start
    while (1)
    {

        // welcome
        welcome();

        //  language choice
        int choice = language_choice();
        // English
        if (choice == 2)
        {
#include "english.c"
            helo();
            int option_value = options();
            if (option_value == 1) // change atm pin
            {
                int account_number = 0, pin = 0, new_pin_1 = 0, new_pin_2 = 0;
                EnTer_account_no_message();
                scanf("%d", &account_number);
                EnTer_atm_pin_message();
                scanf("%d", &pin);
                atm_pin_change_text_third();
                scanf("%d", &new_pin_1);
                atm_pin_change_text_fourth();
                scanf("%d", &new_pin_2);
                if (new_pin_1 == new_pin_2 && pin > 0)
                {
                    atm_pin_change(account_number, pin, new_pin_1);
                    pin_change_sucess();
                }
                else
                {
                    new_pin_not_match();
                }
                WaiT();
            }

            else if (option_value == 2) // Genarate new atm pin
            {
                int account_number = 0, mobile_number = 0, debit_c = 0, new_pin = 0;
                EnTer_account_no_message();
                scanf("%d", &account_number);
                Genarate_Pin_text_Second();
                scanf("%d", &mobile_number);
                Genarate_Pin_text_third();
                scanf("%d", &debit_c);
                Genarate_Pin_text_fourth();
                scanf("%d", &new_pin);
                Genarate_Pin(account_number, mobile_number, debit_c, new_pin);
                Pin_set_success();
                WaiT();
            }
            else if (option_value == 3) // Cash widthdrawl
            {
                int acn = 0, pin = 0, amount = 0;
                EnTer_account_no_message();
                scanf("%d", &acn);
                EnTer_amount_money();
                scanf("%d", &amount);
                EnTer_atm_pin_message();
                scanf("%d", &pin);
                Cash_withdraw(acn, pin, amount);
                collect_money_message();
                WaiT();
            }
            else if (option_value == 4) // balance check
            {
                Balance_check();
                under_constractuion();
                WaiT();
            }
            else
            {
                printf("Error");
            }
        }
        // Hindi
        else if (choice == 1)
        {
#include "hindi.c"
            helo();
            int option_value = options();
            if (option_value == 1) // change atm pin
            {
                int account_number = 0, pin = 0, new_pin_1 = 0, new_pin_2 = 0;
                EnTer_account_no_message();
                scanf("%d", &account_number);
                EnTer_atm_pin_message();
                scanf("%d", &pin);
                atm_pin_change_text_third();
                scanf("%d", &new_pin_1);
                atm_pin_change_text_fourth();
                scanf("%d", &new_pin_2);
                if (new_pin_1 == new_pin_2 && pin > 0)
                {
                    atm_pin_change(account_number, pin, new_pin_1);
                    pin_change_sucess();
                }
                else
                {
                    new_pin_not_match();
                }
                WaiT();
            }

            else if (option_value == 2) // Genarate new atm pin
            {
                int account_number = 0, mobile_number = 0, debit_c = 0, new_pin = 0;
                EnTer_account_no_message();
                scanf("%d", &account_number);
                Genarate_Pin_text_Second();
                scanf("%d", &mobile_number);
                Genarate_Pin_text_third();
                scanf("%d", &debit_c);
                Genarate_Pin_text_fourth();
                scanf("%d", &new_pin);
                Genarate_Pin(account_number, mobile_number, debit_c, new_pin);
                Pin_set_success();
                WaiT();
            }
            else if (option_value == 3) // Cash widthdrawl
            {
                int acn = 0, pin = 0, amount = 0;
                EnTer_account_no_message();
                scanf("%d", &acn);
                EnTer_amount_money();
                scanf("%d", &amount);
                EnTer_atm_pin_message();
                scanf("%d", &pin);
                Cash_withdraw(acn, pin, amount);
                collect_money_message();
                WaiT();
            }
            else if (option_value == 4) // balance check
            {
                Balance_check();
                under_constractuion();
                WaiT();
            }
            else
            {
                printf("Error");
            }

            //  re load
            WaiT();
            for (int zzz = 0; zzz < 5; zzz++)
            {
                printf("\n");
            }
        }
    }
    return 0;
}

void welcome()
{
    printf("\n\n\t\t\t\t\t\tWelcome to Scam ATM !!\n\n");
}
int language_choice()

{
    printf("Hindi ke liye 1 dabaye  |  Press 2 for English\n: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1 || choice == 2)
    {
        return (choice);
    }
    else
    {
        printf("Error");
    }
}
void atm_pin_change(int account_number, int pin, int new_pin)
{
    printf("\nA/C %d\nNew Pin %d\n", account_number, new_pin);
    ProCess();
}
void Genarate_Pin(int account_number, int phone_number, int debit_card, int pin)
{
    printf("\nA/C %d\nDebit card %d\nNew Pin %d\n", account_number, debit_card, pin);
    ProCess();
}
void Cash_withdraw(int account_number, int pin, int amount)
{
    printf("A/C %d\nRs. %d/-\n", account_number, amount);
    ProCess();
}
void Balance_check()
{
    WaiT();
    WaiT();
}