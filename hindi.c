#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

void helo()
{
    printf("aap ne hindi chuna\n");
}
int options()
{
    printf("1.ATM Pin Badle\n");
    printf("2.Naya ATM Pin Genarate karen\n");
    printf("3.Cash Widthdraw Karen \n");
    printf("4.Balance enquery karen\n");
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
    printf("Apna account number Enter karen: ");
}
void EnTer_atm_pin_message()
{
    printf("apna ATM pin enter karen: ");
}
void atm_pin_change_text_third()
{
    printf("Neya ATM pin enter karen: ");
}
void atm_pin_change_text_fourth()
{
    printf("Naya ATM pin dobara enter karen: ");
}
void new_pin_not_match()
{
    printf("Neya pin ek nehi hai\n");
}
void pin_change_sucess()
{
    printf("ATM pin safaltapurbak badal geya...");
}
//..............................pin genarate..........

void Genarate_Pin_text_Second()
{
    printf("Mobile number darj karen: ");
}
void Genarate_Pin_text_third()
{
    printf("Apka debit card number darj karen: ");
}
void Genarate_Pin_text_fourth()
{
    printf("debit card ke liye pin chune: ");
}
void Pin_set_success()
{
    printf("Naya ATM Pin Safaltapurbak set huya..!");
}
//...............................cash width...............
void EnTer_amount_money()
{
    printf("paise nikalne ke liye rasi darj kare: ");
}
void collect_money_message()
{
    printf("Apne payse ekhhetya kare!!\n");
}
void under_constractuion()
{
    printf("Yeh karya abhi bikasadhin hai\n");
}