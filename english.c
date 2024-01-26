#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

void helo()
{
    printf("You chose English\n");
}
int options()
{
    printf("1.Change ATM Pin\n");
    printf("2.Genarate ATM Pin\n");
    printf("3.Cash Widthdraw\n");
    printf("4.Balance enquery\n");
    int a;
    scanf("%d", &a);
    if (a >= 1 && a <= 4)
    {
        return a;
    }
    else
    {
        return 0;
    }
}
//.............................pin change.................
void EnTer_account_no_message()
{
    printf("Enter your account number: ");
}
void EnTer_atm_pin_message()
{
    printf("Enter your ATM pin: ");
}
void atm_pin_change_text_third()
{
    printf("Enter new ATM pin: ");
}
void atm_pin_change_text_fourth()
{
    printf("Re-enter new ATM pin: ");
}
void new_pin_not_match()
{
    printf("New pin not matched\n");
}
void pin_change_sucess()
{
    printf("Pin Successfully changed...");
}
//..............................pin genarate..........

void Genarate_Pin_text_Second()
{
    printf("Enter your Phone number: ");
}
void Genarate_Pin_text_third()
{
    printf("Enter your debit card number: ");
}
void Genarate_Pin_text_fourth()
{
    printf("Set debit card pin: ");
}
void Pin_set_success()
{
    printf("ATM Pin set successfully..!");
}
//...............................cash width...............
void EnTer_amount_money()
{
    printf("enter amount for withdrawal money: ");
}
void collect_money_message()
{
    printf("Collect your money!!\n");
}
void under_constractuion()
{
    printf("This function is under devolopement");
}