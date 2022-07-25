// THIS AN ATM SOFTWARE //
//  THIS PROGRAM IS WRITTEN BY IRETE VINCENT//
//  DATE 11.05.2022.//
//  THIS PROGRAM ASKS A USER TO ENTER HIS OR HER PIN FOR ATM CARD TRANSACTIONS//
//  THIS PROGRAM ASKS A USER TO PRESS 1 FOR ATM TRANSACTIONS//
//  THIS PROGRAM ASKS A USER TO PRESS 2 FOR ATM CARD ACTIVATION//
//  THIS PROGRAM ASKS A USER TO PRESS 000 FOR CARDLESS TRANSACTIONS//
//  THIS PROGRAM ASKS A USER TO PRESS 1234 FOR CASH DEPOSIT//
//  THIS PROGRAM PERFORMS FOUR MAJOR OPERATIONS//
// 1: ATM CARD TRANSACTIONS SUCH AS,WITHDRAWER,TRANSFER,ACCOUNT BALANCE, PURCHASE OF AIRTIME AN PAYMENT OF BILLS//
// 2: ATM CARD ACTIVATION//
// 3: CARDLESS TRANSACTIOS SUCH AS, WITHDRAWER,TRANSFER,ACCOUNT BALANCE ,PURCHASE OF AIRTIME AN PAYMENT OF BILLS //
// 4: CASH DEPOSIT//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int maximum()
{
  int stop;
  int end;
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING !!!\n");
  sleep(2);
  printf("\n PLEASE TAKE YOUR CASH!!\n");
  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PLEASE TAKE YOUR RECEIPT\n");
  printf("\n PRESS 1 TO END THE TRANSACTION\n");
  scanf("%d", &stop);
  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PRESS 2 TO GO BACK TO THE MAIN MENU\n");
  scanf("%d", &end);
}
int minimum()
{
  int ok;
  int stop;
  int end;
  printf("\n PRESS 1 TO CONFIRM \n");
  scanf("%d", &ok);
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING !!!\n");
  sleep(2);
  printf("\n PLEASE TAKE YOUR CASH!!\n");
  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PLEASE TAKE YOUR RECEIPT\n");
  printf("\n PRESS 2 TO END TRANSACTION\n");
  scanf("%d", &stop);
  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PRESS 3 TO GO BACK TO THE MAIN MENU\n");
  scanf("%d", &end);
}
int withdrawer()
{
  int moving;
  int amount;
  printf("\n PRESS 2 TO CONTINUE\n");
  scanf("%d", &moving);
  printf("\n PRESS 1 FOR 20,000\n");

  printf("\n PRESS 2 FOR 15,000\n");

  printf("\n PRESS 3 FOR 10,000\n");

  printf("\n PRESS 4 FOR 5,000\n");

  printf("\n PRESS 5 FOR OTHER AMOUNT LESS THAN LESS THAN 20000\n");

  printf("\n SELECT   THE AMOUNT YOU WANT TO WITHDRAW \n");
  scanf("%d", &amount);
  
  switch (amount)
  {
  case 1:
  printf("\n YOU WANT TO WITHDRAW 20,000\n");
  maximum();
  break;

  case 2:
  printf("\n YOU WANT TO WITHDRAW 15,000\n");
  maximum();
  break;

  case 3:
  printf("\n YOU WANT TO WITHDRAW 10,000\n");
  maximum();
  break;

  case 4:
  printf("\n WANT TO WITHDRAW  5,000\n");
  maximum();
  break;

  default:
  printf("\n YOU HAVE NOT SELECETED ANY AMOUNT\n");
  break;
  int other;
  int ok;
  int amount;
  case 5:

  printf("\n PRESS 2 TO SELECT OTHER AMOUNT\n");
  scanf("%d", &other);
  printf("\n ENTER AMOUNT FROM 1000-19000 TO SELECT YOUR AMOUNT\n");
  scanf("%d", &amount);
  switch (amount)
  {
  case 9000:
  printf("\n YOU WANT TO WITHDRAW 9000\n");
  minimum();
  break;

  case 8000:
  printf("\n YOU  YOU WANT TO WITHDRAW 8000 \n");
  minimum();
  break;

  case 7000:
  printf("\n YOU  YOU WANT TO WITHDRAW 7000\n");
  minimum();
  break;

  case 6000:
  printf("\n YOU  YOU WANT TO WITHDRAW 6000\n");
  minimum();
  break;

  case 5000:
  printf("\n YOU  YOU WANT TO WITHDRAW 5000\n");
  minimum();
  break;

  case 4000:
  printf("\n YOU  YOU WANT TO WITHDRAW 4000\n");
  minimum();
  break;

  case 3000:
  printf("\n YOU  YOU WANT TO WITHDRAW 3000\n");
  minimum();
  break;

  case 2000:
  printf("\n YOU WANT TO WITHDRAW 2000\n");
  minimum();
  break;

  case 12000:
  printf("\n YOU WANT TO WITHDRAW 12000\n");
  minimum();
  break;

  case 13000:
  printf("\n YOU  YOU WANT TO WITHDRAW 13000\n");
  minimum();
  break;

  case 14000:
  printf("\n YOU  YOU WANT TO WITHDRAW 14000\n");
  minimum();
  break;

  case 16000:
  printf("\n YOU  YOU WANT TO WITHDRAW 16000\n");
  minimum();
  break;

  case 17000:
  printf("\n YOU  YOU WANT TO WITHDRAW 17000\n");
  minimum();
  break;

  case 18000:
  printf("\n YOU  YOU WANT TO WITHDRAW 18000\n");
  minimum();
  break;

  case 19000:
  printf("\n YOU  YOU WANT TO WITHDRAW 19000\n");
  minimum();
  break;

  case 1000:
  printf("\n YOU  YOU WANT TO WITHDRAW 1000\n");
  minimum();
  break;

  case 15000:
  printf("\n YOU  YOU WANT TO WITHDRAW 15000\n");
  minimum();
  break;

  default:
  printf("\n YOU HAVE NOT ENTERED ANY AMOUNT\n");
  break;
  }
  }
}
int cardline()

{
  int no ;
  int yeso ;
  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PLEASE TAKE YOUR RECEIPT\n");
  printf("\n PRESS 1 TO END THE TRANSACTION\n");
  scanf("%d", &no);
  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PRESS 2 TO GO BACK TO THE MAIN MENU\n");
  scanf("%d", &yeso);
}

int mtncard()
{
  printf("\n YOU HAVE SELECTED MTN REACHARD CARD\n");
  printf("\n SELECT FROM THE MENU\n");
  int mtn1[10] = {0, 2000, 3000, 1000, 500, 400, 300, 200, 100, 1500};
  int j;
  for (j = 0; j < 10; j++)
  {
  printf("\n  MTN CARD %d: %d\n", j, mtn1[j]);
  }

  int select;
  printf("\n PLEASE SELECT YOUR AMOUNT:\n");
  scanf("%d", &select);

  switch (select)
  {
  case 1:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED MTN CARD OF 2000\n");
  cardline();
  break;

  case 2:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED MTN CARD OF 3000\n");
  cardline();
  break;

  case 3:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED MTN CARD OF 1000\n");
  cardline();
  break;

  case 4:
  printf("\nPLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\nDEAR CUSTOMER YOU HAVE PURCHASED MTN CARD OF 500\n");
  cardline();
  break;

  case 5:
  printf("\nPLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\nDEAR CUSTOMER YOU HAVE PURCHASED MTN CARD OF 400\n");
  cardline();
  break;

  case 6:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED MTN CARD OF 300\n");
  cardline();
  break;

  case 7:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED MTN CARD OF 200\n");
  cardline();
  break;

  case 8:
  printf("\nPLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\nDEAR CUSTOMER YOU HAVE PURCHASED MTN CARD OF 100\n");
  cardline();
  break;

  case 9:
  printf("\nPLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\nDEAR CUSTOMER YOU HAVE PURCHASED MTN CARD OF 1500\n");
  cardline();
  break;

  default:
  printf("\nPLEASE ENTER YOUR AMOUNT\n");
  break;
  }
}
int card()
{
  int period;
  int continual;
  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PLEASE TAKE YOUR RECEIPT\n");
  printf("\n PRESS 1 TO END THE TRANSACTION\n");
  scanf("%d", &period);
  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PRESS 2 TO GO BACK TO THE MAIN MENU\n");
  scanf("%d", &continual);
}

int airtelcard()
{

  int period;
  int j;
  int continual;
  printf("\n YOU HAVE SELECTED AIRTEL REACHARGE CARD\n");

  int airtel[10] = {0, 3000, 1000, 500, 400, 300, 200, 100, 1500, 2000};
  int ji;
  for (ji = 0; ji < 10; ji++)
  {
  printf("\n AIRTEL CARD %d: %d\n", ji, airtel[ji]);
  }

  int amount1;
  printf("\n SELECT THE AMOUNT OF CARD YOU WANT\n");
  scanf("%d", &amount1);
  switch (amount1)
  {

  case 1:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED AIRTEL CARD OF 3000\n");
  card();
  break;

  case 2:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED AIRTEL CARD OF 1000\n");
  card();
  break;

  case 3:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED AIRTEL CARD OF 500\n");
  card();
  break;

  case 4:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED AIRTEL CARD OF 400\n");
  card();
  break;

  case 5:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED AIRTEL CARD OF 300\n");
  card();
  break;

  case 6:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED AIRTEL CARD OF 200\n");
  card();
  break;

  case 7:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED AIRTEL CARD OF 100\n");
  card();
  break;

  case 8:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED AIRTEL CARD OF 1500\n");
  card();
  break;

  case 9:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED AIRTEL CARD OF 2000\n");
  card();
  break;

  default:
  printf("YOU HAVE NOT SELECTED ANY AMOUNT:/n");
  break;
  }
}

int recharge()
{
  int nono;
  int yesyes;
  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PLEASE TAKE YOUR RECEIPT\n");
  printf("\n PRESS 1 TO END THE TRANSACTION\n");
  scanf("%d", &nono);
  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PRESS 2 TO GO BACK TO THE MAIN MENU\n");
  scanf("%d", &yesyes);
}

int mobilecard()
{
  int ndd;
  int ad;
  int mobil;
  int nono;
  int yesyes;
  int mobile[10] = {0, 3000, 1000, 500, 400, 300, 200, 100, 1500, 2000};
  int jj;
  for (jj = 0; jj < 10; jj++)
  {
  printf("\n 9 MOBILE CARD %d: %d\n", jj, mobile[jj]);
  }

  printf("PLEASE SELECT YOUR AMOUNT:\n");
  scanf("%d", &mobil);
  switch (mobil)
  {
  case 1:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED 9 MOBILE CARD OF 3000\n");
  recharge();
  break;

  case 2:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED 9 MOBILE CARD OF 1000\n");
  recharge();
  break;

  case 3:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED 9 MOBILE CARD OF 500\n");
  recharge();
  break;

  case 4:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED 9 MOBILE CARD OF 400\n");
  recharge();
  break;

  case 5:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED 9 MOBILE CARD OF 300\n");
  recharge();
  break;

  case 6:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED 9 MOBILE CARD OF 200\n");
  recharge();
  break;

  case 7:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED 9 MOBILE CARD OF 100\n");
  recharge();
  break;

  case 8:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED 9 MOBILE CARD OF 1500\n");
  recharge();
  break;

  case 9:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED 9 MOBILE CARD OF 2000\n");
  recharge();
  break;

  default:
  printf("\n YOU HAVE NOT SELECTED ANY AMOUNT:/n");
  break;
  }
}
int rechargecard()
{
  int ending;
  int carryon;
  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PLEASE TAKE YOUR RECEIPT\n");
  printf("\n PRESS 1 TO END THE TRANSACTION\n");
  scanf("%d", &ending);
  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PRESS 2 TO GO BACK TO THE MAIN MENU\n");
  scanf("%d", &carryon);
  printf("\nTHANK YOU FOR BANKING WITH US\n");
}

int glocard()
{
  int price;
  int carryon;
  int ending;
  int glo[10] = {0, 3000, 1000, 500, 400, 500, 200, 100, 1500, 2000};
  int x;
  for (x = 0; x < 10; x++)
  {
  printf("\n  GLO CARD %d:%d\n", x, glo[x]);
  }
  printf("SELECT YOUR AMOUNT:\n");
  scanf("%d", &price);
  switch (price)
  {
  case 1:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED GLO CARD OF 3000\n");
  rechargecard();
  break;

  case 2:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED GLO CARD OF 1000\n");
  rechargecard();
  break;

  case 3:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED GLO CARD OF 500\n");
  rechargecard();
  break;

  case 4:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED GLO CARD OF 400\n");
  rechargecard();
  break;

  case 5:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED GLO CARD OF 300\n");
  rechargecard();
  break;

  case 6:
  printf("\nPLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED GLO CARD OF 200\n");
  rechargecard();
  break;

  case 8:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED GLO CARD OF 1500\n");
  rechargecard();
  break;

  case 9:
  printf("\n PLEASE  WAIT WHY YOUR TRANSACTION IS PROCESSING!!!:\n");
  sleep(2);
  printf("\n DEAR CUSTOMER YOU HAVE PURCHASED GLO CARD OF 2000\n");
  rechargecard();
  break;

  default:
  printf("\n YOU HAVE NOT ENTER ANY AMOUNT\n");
  break;
  }
}

int transfer()
{
  int amt;
  int account;
  int confirmed;
  int conform;
  int goon;
  int ok;
  int name;
  int know;
  int bank;

  printf("\n YOU HAVE SELECTED CASH TRANSFER\n");
  printf("\n PRESS 2 TO SELECT BANK NAME \n");
  scanf("%d", &name);
  printf("\n 1 :ACCESS BANK PLC\n");
  printf("\n 2 :CITY BANK NIGERIA LIMITED\n");
  printf("\n 3 :ECO BANK NIGERIA\n");
  printf("\n 4 :FIDELITY BANK PLC\n");
  printf("\n 5 :FIRST BANK NIGERIA LIMITED\n");
  printf("\n 6 :FIRST CITY MONUMENT BANK \n");
  printf("\n 7 :GUARANTY TRUST BANK PLC\n");
  printf("\n 8 :HERITAGE BANK PLC\n");
  printf("\n 9 :KEYSTONE BANK LIMITED\n");
  printf("\n 10 :LOTUS  BANK \n");
  printf("\n 11 :POLARIES BANK LIMITED\n");
  printf("\n 12 :STANBIC IBTC BANK PLC\n");
  printf("\n 13 :STERLINGC BANK \n");
  printf("\n 14 :SUN TRUST BANK PLC\n");
  printf("\n 15 :UNITED BANK FOR AFRICA \n");
  printf("\n 16 :UNITY BANK PLC\n");
  printf("\n 17 :UNION BANK PLC\n");
  printf("\n 18 :WEMA BANK PLC\n");
  printf("\n 19:ZENITH BANK\n");
  scanf("%d", &bank);
  switch (bank)
  {
  case 1:
  printf("\n ACCESS BANK\n");
  break;

  case 2:
  printf("\n CITY BANK\n");
  break;

  case 3:
  printf("\n ECO BANK\n");
  break;

  case 4:
  printf("\n FIDELITY BANK\n");
  break;

  case 5:
  printf("\n FIRST BANK\n");
  break;

  case 6:
  printf("\n FIRST CITY MONUMENT BANK\n");
  break;

  case 7:
  printf("\n GUARANTY TRUST BANK\n");
  break;

  case 8:
  printf("\n HERITAGE BANK\n");
  break;

  case 9:
  printf("\n KEYSTONE BANK\n");
  break;

  case 10:
  printf("\n LOTUS BANK\n");
  break;

  case 11:
  printf("\n POLARIS BANK\n");
  break;

  case 12:
  printf("\n STANBIC IBTC BANK\n");
  break;

  case 13:
  printf("\n STERLING BANK\n");
  break;

  case 14:
  printf("\n SUNTRUST BANK\n");
  break;

  case 15:
  printf("\n UNITED BANK FOR AFRICA(UBA)\n");
  break;

  case 16:
  printf("\n UNITY BANK\n");
  break;

  case 17:
  printf("\n UNION BANK\n");
  break;

  case 18:
  printf("\n WEMA BANK\n");
  break;

  case 19:
  printf("\n ZENITH BANK\n");
  break;
  }

  printf("\n ENTER THE RECEIPIANT ACCOUNT NUMBER:\n");
  scanf("%d", &account);
  printf("\n YOU HAVE ENTERED ACCOUNT NUMBER: %d\n", account);
  printf("\n PRESS 1 TO PROCEED:\n");
  scanf("%d", &goon);
  printf("\n ENTER THE AMOUNT YOU WANT TO TRANSFER:\n");
  scanf("%d", &amt);
  if (amt >= 119000)
  {
    printf("\n INSUFFICIENT BALANCE\n");
    printf("\n YOUR  AVAILABLE ACCOUNT BALANCE IS\n");
    printf("\n      120,000.45   \n");
    printf("\n ENTER AN AMOUNT LESS THAN 119,000 OR EQUAL TO 119000\n");
    printf("\n ENTER THE AMOUNT YOU WANT TO TRANSFER:\n");
    scanf("%d", &amt);
  }

  printf("\n YOU WANT TO TRANSFER :%d\n", amt);
  printf("\n PRESS 1 to PROCEED:\n");
  scanf("%d", &goon);
  sleep(2);
  printf("\n ACCOUNT NAME : EMMANUEL AFOLABI\n");
  printf("\n RECEIPIANT ACCOUNT NUMBER: %d\n", account);
  printf("\n YOU ABOUT TO TRANSFER : %d \n", amt);
  printf("\n  DATE:9-05-2022\n");
  printf("\n TIME: 12:30pm\n");
  printf("\n DEAR CUSTOMER CHECK THE RECEIPIANT DETAILS BEFORE YOU CONFIRM\n");
  printf("\n PRESS 1 TO CONFIRM\n");
  scanf("%d", &confirmed);
  sleep(3);
  printf("\n TRANSFER SUCCESSFUL!!!:\n");
  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PLEASE TAKE YOUR RECEIPT\n");
  printf("\n PRESS 2 TO END:\n");
  scanf("%d", &know);
  printf("\n PRESS 3 TO GO BACK TO THE MAIN MENU\n");
  scanf("%d", &ok);
}
int accountbalance()
{

  int see;
  int known;
  int unknown;

  printf("\n PRESS 2 TO SEE YOUR ACCOUNT BALANCE\n");
  scanf("%d", &see);

  printf("\n DEAR CUSTOMER YOUR ACCOUNT BALANCE IS...... \n");

  printf("\n AVAILABLE BALANCE IS   120,000.45\n");

  printf("\n LEDGER ACCOUNT BALANCE IS  120 ,000.85\n");

  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PLEASE TAKE YOUR RECEIPT\n");
  printf("\n PRESS 1 TO END THE TRANSACTION\n");
  scanf("%d", &known);
  printf("\n THANK YOU FOR BANKING WITH US\n");
  printf("\n PRESS 2 TO GO BACK TO THE MAIN MENU\n");
  scanf("%d", &unknown);
}

int electricity()
{

  int number3;
  int money;
  int accept3;
  int biller;
  int bills;

  printf("\n PLEAES ENTER YOUR METER/SMARTCARD NUMBER\n");
  scanf("%d", &number3);
  printf("\n ENTER THE AMOUNT YOU WANT TO PAY\n");
  scanf("%d", &money);
  printf("\n YOUR NAME IS OKEKE EMMANUEL\n");
  printf("\n YOUR METER OR SMARTCARD NUMBER IS %d\n", number3);
  printf("\n THE AMOUNT YOU WANT TO PAY IS %d\n", money);
  printf("\n WAIT WHY YOUR TRANSACTION IS PROCESSING!!!!\n");
  sleep(2);
  printf("\n PRESS 1 TO CONFIRM YOUR TRANSACTION\n");
  scanf("%d", &accept3);
  printf("\n THANKING YOU FOR BANKING WITH US\n");
  printf("\n PLEASE TAKE YOUR RECEIPT\n");
  printf("\n PRESS 2 TO END THE TRANSACTION\n");
  scanf("%d", &biller);
  printf("\n PRESS 3 TO GO  BACK TO THE MAIN MENU\n");
  scanf("%d", &bills);
}
int startimes()
{
  int number1;
  int accept1;
  int biller;
  int bills;
  printf("\n PLEAES ENTER YOUR SMARTCARD NUMBER\n");
  scanf("%d", &number1);
  printf("\n WAIT WHY YOUR TRANSACTION IS PROCESSING!!!!\n");
  sleep(2);
  printf("\n YOUR NAME IS FRANK EDWARD\n");
  printf("\n YOUR SMARTCARD NUMBER IS %d\n", number1);
  printf("\n  ONE MONTH SUBSCRIPTION\n");
  printf("\n PRESS 1 TO CONFIRM YOUR TRANSACTION\n");
  scanf("%d", &accept1);
  printf("\n THANKING YOU FOR BANKING WITH US\n");
  printf("\n PLEASE TAKE YOUR RECEIPT\n");
  printf("\n PRESS 2 TO END THE TRANSACTION\n");
  scanf("%d", &biller);
  printf("\n PRESS 3 TO GO  BACK TO THE MAIN MENU\n");
  scanf("%d", &bills);
}
int gotv()
{
  int number1;
  int accept1;
  int biller;
  int bills;
  printf("\n PLEAES ENTER YOUR SMARTCARD NUMBER\n");
  scanf("%d", &number1);
  printf("\n WAIT WHY YOUR TRANSACTION IS PROCESSING!!!!\n");
  sleep(2);
  printf("\n YOUR NAME IS ADAMS OMON\n");
  printf("\n YOUR SMARTCARD NUMBER IS %d\n", number1);
  printf("\n  ONE MONTH SUBSCRIPTION\n");
  printf("\n PRESS 1 TO CONFIRM YOUR TRANSACTION\n");
  scanf("%d", &accept1);
  printf("\n THANKING YOU FOR BANKING WITH US\n");
  printf("\n PLEASE TAKE YOUR RECEIPT\n");
  printf("\n PRESS 2 TO END THE TRANSACTION\n");
  scanf("%d", &biller);
  printf("\n PRESS 3 TO GO  BACK TO THE MAIN MENU\n");
  scanf("%d", &bills);
}
int dstv()
{
  int number;
  int accept;
  int biller;
  int bills;
  printf("\n PLEAES ENTER YOUR SMARTCARD NUMBER\n");
  scanf("%d", &number);
  printf("\n WAIT WHY YOUR TRANSACTION IS PROCESSING!!!!\n");
  sleep(2);
  printf("\n YOUR NAME IS OLUCHI EMMANUEL\n");
  printf("\n YOUR SMARTCARD NUMBER IS %d\n", number);
  printf("\n  ONE MONTH SUBSCRIPTION\n");
  printf("\n PRESS 1 TO CONFIRM YOUR TRANSACTION\n");
  scanf("%d", &accept);
  printf("\n THANKING YOU FOR BANKING WITH US\n");
  printf("\n PLEASE TAKE YOUR RECEIPT\n");
  printf("\n PRESS 2 TO END THE TRANSACTION\n");
  scanf("%d", &biller);
  printf("\n PRESS 3 TO GO  BACK TO THE MAIN MENU\n");
  scanf("%d", &bills);
}

int billpayment()
{
  int master;
  int bill;
  int billing;
  int bills;
  int biller;
  printf("\n PRESS 1 FOR CABLE PAYMENT OF BILLS \n");
  printf("\n PRESS 2 FOR ELECTRICITY PAYMENT OF BILLS\n");
  scanf("%d", &master);
  if (master == 1)
  {
    printf("\n YOU HAVE SELECTED CABLE SUBSCRIPTION\n");

    sleep(2);
    printf("\n PRESS 1 FOR DSTV PAYMENT OF BILLS\n");
    printf("\n PRESS 2 FOR GOTV PAYMENT OF BILLS\n");
    printf("\n PRESS 3 FOR STARTIMES PAYMENT OF BILLS\n");
    scanf("%d", &billing);
    switch (billing)
    {
    int menu;
    case 1:
    printf("\n YOU HAVE SELECTED DSTV  PAYMENT OF BILLS\n");
   
    printf("\n  PLEASE SELECT FROM DSTV PACKAGES(MONTHLY)\n");
    printf("\n PRESS 1 FOR DSTV PREMIUM   >>21,000 \n");
    printf("\n PRESS 2 FOR DSTV COMPACT PLUS>> 14,250\n");
    printf("\n PRESS 3 FOR DSTV  COMPACT >>9,000\n");
    printf("\n PRESS 4 FOR DSTV  CONFAM  >>5,300 \n");
    printf("\n PRESS 5 FOR DSTV  YANGA   >>  2,950 \n");
    printf("\n PRESS 6 FOR DSTV   PADI   >>2,150\n");
    printf("\n PRESS 2 TO CONTINUE\n");
    scanf("%d", &menu);
    switch (menu)
    {
    int number;
    int accept;
    case 1:
    printf("\n YOU HAVE SELECTED PREMIUM PACKAGE\n");
    dstv();
    break;

    case 2:
    printf("\n YOU HAVE SELECTED COMPACT PLUS PACKAGE\n");
    dstv();
    break;

    case 3:
    printf("\n YOU HAVE SELECTED COMPACT PACKAGE\n");
    dstv();
    break;

    case 4:
    printf("\n YOU HAVE SELECTED CONFAM PACKAGE\n");
    dstv();
    break;

    case 5:
    printf("\n YOU HAVE SELECTED YINGA PACKAGE\n");
    dstv();
    break;

    case 6:
    printf("\n YOU HAVE SELECTED PADI PACKAGE\n");
    dstv();
    break;
    }

    break;
    int menu2;
    case 2:
    printf("\n YOU HAVE SELECTED GOTV  PAYMENT OF BILLS\n");
    sleep(2);
    printf("\n DEAR CUSTOMER PLEASE SELECT FROM GOTV PACKAGES(MONTHLY)\n");
    printf("\n PRESS 1 FOR GOTV SUPA > 5,500\n");
    printf("\n PRESS 2 FOR GOTV MAX  > 4,150\n");
    printf("\n PRESS 3 FOR GOTV JOLLI > 2,800\n");
    printf("\n PRESS 4 FOR GOTV JINGA > 1,900\n");
    printf("\n PRESS 5 GOTV SMALLI > 900\n");
    printf("\n PRESS 2 TO CONTINUE\n");
    scanf("%d", &menu2);
    switch (menu2)
    {
    case 1:
    printf("\n YOU HAVE SELECTED GOTV SUPA PACKAGE \n");
    gotv();
    break;

    case 2:
    printf("\n YOU HAVE SELECTED GOTV MAX PACKAGE \n");
    gotv();
    break;

    case 3:
    printf("\n YOU HAVE SELECTED GOTV JOLI PACKAGE \n");
    gotv();
    break;

    case 4:
    printf("\n YOU HAVE SELECTED GOTV JINGA PACKAGE \n");
    gotv();
    break;

    case 5:
    printf("\n YOU HAVE SELECTED GOTV SMALLI PACKAGE \n");
    gotv();
    break;
    }
    break;
    int menu3;
    case 3:
    printf("\n YOU HAVE SELECTED STARTIMES PAYMENT OF BILLS\n");
    sleep(2);
    printf("\n DEAR CUSTOMER PLEASE SELECT FROM STARTIMES PACKAGES(MONTHLY)\n");
    printf("\n PRESS 1 FOR STARTIMES NOVA BOUQUET >9,00\n");
    printf("\n PRESS 2 FOR STARTIMES BASIC BOUQUET >1,700\n");
    printf("\n PRESS 3 FOR STARTIMES CLASSIC BOUQUET>2,500\n");
    printf("\n PRESS 4 FOR STARTIMES SMART BOUQUET >2,200\n");
    printf("\n PRESS 5 FOR STARTIMES SUPER BOUQUET >4,200\n");
    printf("\n PRESS 6 FOR STARTIMES CHINESE BOUQUET>6,600\n");
    printf("\n PRESS 2 TO CONTINUE\n");
    scanf("%d", &menu3);
    switch (menu3)
    {
    case 1:
    printf("\n YOU HAVE SELECTED STARTIMES NOVA BOUQUET\n");
    startimes();
    break;

    case 2:
    printf("\n YOU HAVE SELECTED STARTIMES BASIC BOUQUET\n");
    startimes();
    break;

    case 3:
    printf("\n YOU HAVE SELECTED STARTIMES CLASSIC BOUQUET\n");
    startimes();
    break;

    case 4:
    printf("\n YOU HAVE SELECTED STARTIMES SMART BOUQUET\n");
    startimes();
    break;

    case 5:
    printf("\n YOU HAVE SELECTED STARTIMES SUPER BOUQUET\n");

    startimes();
    break;

    case 6:
    printf("\n YOU HAVE SELECTED STARTIMES CHINESE BOUQUET\n");
    startimes();
    break;
    }
    break;
    }
  }

  else if (master == 2)
  {
    int two;
    printf("\n YOU HAVE SELECTED ELECTRICITY PAYMENT OF BILLS \n");

    printf("\n PRESS 2 TO CONTINUE\n");
    scanf("%d", &bill);
    printf("\n PRESS 1 FOR PREPAID\n");
    printf("\n PRESS 2 FOR POSTPAID\n");
    scanf("%d", &two);
    if (two == 1)
    {
    printf("\n YOU HAVE SELECTED PREPAID\n");
    sleep(2);
    }
    else if (two == 2)
    {
    printf("\n YOU HAVE SELECTED POSTPAID\n");
    printf("\n PRESS 2 TO CONTINUE\n");
    scanf("%d", &bill);
    }
    else
    {
    printf("\n YOU HAVE NOT SELECTED ANY\n");
    }

    printf("\n PRESS 1 FOR EKO ELECTRICITY DISTRIBUTION COMPANY(EKEDC)\n");

    printf("\n PRESS 2 FOR KANO ELECTRICITY DISTRIBUTION C2OMPANY(KEDC)\n");

    printf("\n PRESS 3 FOR BENIN ELECTRICITY DISTRIBUTION COMPANY(BEDC)\n");

    printf("\n PRESS 4 FOR  JOS ELECTRICITY DISTRIBUTION COMPANY(JEDC)\n");

    printf("\n PRESS 5 FOR IKEJA  ELECTRICITY DISTRIBUTION COMPANY(IKEDC)\n");

    printf("\n PRESS 6 FOR KADUNA  ELECTRICITY DISTRIBUTION COMPANY(KEDC)\n");

    printf("\n PRESS 7 FOR YOLA  ELECTRICITY DISTRIBUTION COMPANY(YEDC)\n");

    printf("\n PRESS 9 FOR ABUJA  ELECTRICITY DISTRIBUTION COMPANY(AEDC)\n");

    printf("\n PRESS 10 FOR IBADAN  ELECTRICITY DISTRIBUTION COMPANY(IEDC)\n");

    printf("\n PRESS 11 FOR PORTHARCOURT ELECTRICITY DISTRIBUTION COMPANY(PEDC)\n");

    printf("\n PRESS 2 TO CONTINUE\n");
    scanf("%d", &bill);
    switch (bill)
    {

  int money;
  case 1:
  printf("\n YOU HAVE SELECTED EKO ELECTRICITY DISTRIBUTION COMPANY(EKEDC) PLC \n ");
  electricity();
  break;

  case 2:
  printf("\n YOU HAVE SELECTED KANO ELECTRICITY DISTRIBUTION COMPANY PLC(KEDC)PLC\n");
  electricity();
  break;

  case 3:
  printf("\n YOU HAVE SELECTED  BENIN  ELECTRICITY DISTRIBUTION COMPANY(BEDC) PLC\n");
  electricity();
  break;

  case 4:
  printf("\n YOU HAVE SELECTED JOS ELECTRICITY DISTRIBUTION COMPANY(JEDC) PLC\n");
  electricity();
  break;

  case 5:
  printf("\n YOU HAVE SELECTED IKEJA ELECTRICITY DISTRIBUTION COMPANY(IKEDC)\n");
  electricity();
  break;

  case 6:
  printf("\n YOU HAVE SELECTED KADUNA ELECTRICITY DISTRIBUTION COMPANY PLC\n");
  electricity();
  break;

  case 7:
  printf("\n YOU HAVE SELECTED YOLA ELECTRICITY DISTRIBUTION COMPANY(KEDC) PLC\n");
  electricity();
  break;

  case 8:
  printf("\n YOU HAVE SELECTED ENUGU ELECTRICITY DISTRIBUTION COMPANY (EEDC)PLC\n");
  electricity();
  break;

  case 9:
  printf("\n YOU HAVE SELECTED ABUJA ELECTRICITY DISTRIBUTION COMPANY(AEDC) PLC\n");
  electricity();
  break;

  case 10:
  printf("\n YOU HAVE SELECTED IBADAN ELECTRICITY DISTRIBUTION COMPANY(IEDC) PLC\n");
  electricity();
  break;

  case 11:
  printf("\n YOU HAVE SELECTED PORTHARCOURT ELECTRICITY DISTRIBUTION COMPANY(PEDC) PLC\n");
  electricity();
  break;
  }
  }
}

int menuatm()
{

  int menu;
  printf("\n PLEASE INSERT YOUR ATM CARD FOR ATM TRANSACTIONS \n");
  printf("\n DEAR CUSTOMER WELCOME TO ZENITH BANK\n");
  printf("\n WE RENDER EXCELLENT SERVICES TO OUR CUSTOMERS\n");
  sleep(4);
  printf("\n PRESS 1 FOR ATM CARD TRANSACTIONS\n");
  printf("\n PRESS 2 FOR ATM CARD ACTIVATION\n");
  printf("\n PRESS 000 FOR  CARDLESS TRANSACTIONS\n");
  printf("\n PRESS 1234 FOR CASH DEPOSIT\n");
  scanf(" %d", &menu);
  switch (menu)
  {
  
    int atmtransaction;
    int moving;
    int pin1;
    case 1:

    printf("\n YOU HAVE SELECTED ATM CARD TRNSACTIONS\n");
    sleep(2);
    printf("\n DEAR CUSTOMER WELCOME TO ZENITH BANK!!!\n");
    
    printf("\n PLEASE PROTECT YOU PIN AGAINST FRAUDSTERS!!!\n");
    printf("\n ENTER YOUR PIN (4 DIGITS NUMBER:(0-9):\n");
    scanf("%d", &pin1);

    if (pin1 != 1999 && pin1 != 2000 && pin1 != 1989 && pin1 != 2011)
    {
    printf("\n YOU HAVE ENTERED WRONG PIN\n");
    printf("\n DEAR CUSTOMER ENTER YOUR CORRECT PIN\n");
    scanf("%d", &pin1);
    }
    printf("\n WAIT WHY YOUR TRANSACTION IS PROCESSING!!!!\n");
    sleep(4);
    int accounttype;
    printf("\n PRESS 1 FOR SAVINGS ACCOUNT\n");
    printf("\n PRESS  2 FOR CURRENT ACCOUNT\n");
    scanf("%d", &accounttype);
    switch (accounttype)
    {
    case 1:
      printf("\n YOU HAVE SELECTED SAVINGS\n");
      break;

    case 2:
      printf("\n YOU HAVE SELECTED CURRENT\n");
      break;

    default:
      printf("\n YOU HAVE NOT SELECTED ANY ACCOUNT TYPE\n");
      break;
    }
    printf("\n PRESS 1 FOR CASH WITHDRAWER\n");
    printf("\n PRESS 2 FOR ATM CASH TRANSFER\n");
    printf("\n PRESS 3 HOW TO CHECK ACCOUNT BALANCE\n");
    printf("\n PRESS 4 FOR PAYMENT OF PAYMENT OF BILLS\n");
    printf("\n PRESS 5 FOR AIRTIME PURCHASE\n");
    scanf("%d", &atmtransaction);
    switch (atmtransaction)

    {
    case 1:
    printf("\n YOU HAVE SELECTED ATM CASH WITHDRAWER\n");
    withdrawer();

    break;

    case 2:
    printf("\n YOU HAVE SELECTED ATM CASH TRANSFER\n");
    transfer();
    break;

    case 3:
    printf("\n YOU HAVE SELECTED HOW TO CHECK ACCOUNT BALANCE\n");
    accountbalance();
    break;

    case 4:
    printf("\n YOU HAVE SELECTED ATM CASH PAYMENT OF BILLS\n");
    billpayment();
    break;

    case 5:
    printf("\n YOU HAVE SELECTED AIRTIME CARD PURCHASE\n");

    int card;
    printf("\n PRESS 1 FOR MTN REACHARGE CARD\n");
    printf("\n PRESS 2 FOR AIRTEL REACHARGE CARD\n");
    printf("\n PRESS 3 FOR 9 MOBILE REACHARGE CARD\n");
    printf("\n PRESS 4 FOR GLO REACHARGE CARD\n");
    printf("\n PRESS 2 TO CONTINUE\n");
    scanf("%d", &card);
    switch (card)
    {

    case 1:
    printf("\n YOU HAVE SELECTED MTN REACHARGE CARD\n");
    mtncard();
    break;

    case 2:
    printf("\n YOU HAVE SELECTED AIRTEL REACHARGE CARD\n");
    airtelcard();
    break;

    case 3:
    printf("\n YOU HAVE SELECTED 9 MOBILE REACHARGE CARD\n");
    mobilecard();
    break;

    case 4:
    printf("\n YOU HAVE SELECTED GLO REACHARGE CARD\n");
    glocard();

    break;
    }

    break;
    }

    break;
    int one;
    int pin2;
    int no;
    int yes;

    case 2:
    printf("\n YOU HAVE SELECTED ATM CARD ACTIVATION\n");
    printf("\n DEAR CUSTOMER WELCOME TO ZENITH  BANK\n");
    printf("\n INSERT YOU ATM CARD FOR ACTIVATION\n");
    printf("\n PLEASE WAIT WHY YOUR TRANSACTION IS PROCESSING!!!\n");
    sleep(4);
    printf("\n PRESS 1 TO CANCLE THE EXISTING PIN\n");
    scanf("%d", &one);
    printf("\n PLEASE ENTER YOUR PREFERRED 4 DIGITS PIN\n");
    scanf("%d", &pin2);
    printf("\n PLEASE WAIT WHY YOUR TRANSACTION IS PROCESSING!!!\n");
    sleep(2);
    printf("\n PLEASE RE_ ENTER YOUR PREFERRED 4 DIGITS PIN\n");
    scanf("%d", &pin2);
    printf("\n PRESS 1 TO CONFIRM\n");
    scanf("%d", &one);
    sleep(2);
    printf("\n YOUR ATM CARD HAD BEEN SUCCESSFULL ACTIVATED \n");
    printf("\n THANK YOU FOR BANKING WITH US!!!\n");
    printf("\n PRESS 1 TO END TRANSACTION \n");
    scanf("%d", &no);
    printf("\n PLEASE TAKE YOUR ATM CARD\n");
    printf("\n PLEASE TAKE YOUR RECEIPT\n");
    printf("\n PRESS 2 TO GO BACK TO THE MAIN MENU\n");
    scanf("%d", &yes);
    printf("\n THANK YOU FOR BANKING WITH US!!!\n");
    printf("\n PLEASE TAKE YOUR ATM CARD\n");
    break;

    case 000:
    printf("\n YOU HAVE SELECTED CARDLESS TRANSACTIONS\n");
    int cardless;
    int carry;
    int proceed;
    int bz;
    int accountT;
    int phone;
    int proce;
    printf("\n PRESS 2 TO CONTINUE\n");
    scanf("%d", &carry);
    printf("\n WELCOME TO ZENITH BANK\n");
    sleep(2);
    printf("\n  ENTER YOUR PIN (11 DIGITS PHONE NUMBER)\n");
    scanf("%d", &phone);
    printf("\n YOUR PHONE NUMBER IS %d \n", phone);
    printf("\n PRESS 1 FOR SAVINGS ACCOUNT\n");
    printf("\n PRESS  2 FOR CURRENT ACCOUNT\n");
    scanf("%d", &accountT);
    switch (accountT)
    {
    case 1:
    printf("\n YOU HAVE SELECTED SAVINGS\n");
    break;

    case 2:
    printf("\n YOU HAVE SELECTED CURRENT\n");
    break;

    default:
    printf("\n YOU HAVE NOT SELECTED ANY ACCOUNT TYPE\n");
    break;
    }

    printf("\n PLEASE WAIT WHY YOUR TRANSACTION IS PROCESSING!!!\n");
    sleep(3);
    printf("\n DEAR CUSTOMER PLACE YOU RIGHT INDEX FINGER ON THE BIOMETRIC CHIP\n");
    printf("\n PLEASE WAIT FOR 5 SECONDS\n");
    sleep(5);
    printf("\n REMOVE YOUR FINGER\n");
    printf("\n PRESS 1 TO CONTINUE THE TRANSACTION \n");
    scanf("%d", &proceed);

    printf("\n PRESS 1 FOR CARDLESS WITHDRAWER\n");

    printf("\n PRESS 2 FOR CARDLESS TRANSFER\n");

    printf("\n PRESS 3 FOR CARDLESS ACCOUNT BALANCE\n");

    printf("\n PRESS 4 FOR CARDLESS PAYMENT OF BILLS\n");

    printf("\n PRESS 5 FOR CARDLESS AIRTIME PURCHASE\n");

    printf("\n PRESS 2 TO CONTINUE\n");
    scanf("%d", &cardless);
    switch (cardless)
    {

    case 1:
    printf("\n YOU HAVE SELECTED CARDLESS WITHDRAWER\n");
    withdrawer();
    break;

    break;
    case 2:
    printf("\n YOU HAVE SELECTED CARDLESS TRANSFER\n");
    transfer();
    break;

    case 3:
    printf("\n YOU HAVE SELECTED ACCOUNT BALANCE\n");
    accountbalance();
    break;

    case 4:
    printf("\n YOU HAVE SELECTED CARDLESS PAYMENT OF BILLS\n");

    billpayment();
    break;

    case 5:
    printf("\n YOU HAVE SELECTED CARDLESS AIRTIME PURCHASE\n");
    int card;
    sleep(2);
    printf("\n PRESS 1 FOR MTN REACHARGE CARD\n");
    printf("\n PRESS 2 FOR AIRTEL REACHARGE CARD\n");
    printf("\n PRESS 3 FOR 9 MOBILE REACHARGE CARD\n");
    printf("\n PRESS 4 FOR GLO REACHARGE CARD\n");
    scanf("%d", &card);
    switch (card)
    {

    case 1:
    printf("\n YOU HAVE SELECTED MTN REACHARGE CARD\n");
    mtncard();
    break;

    case 2:
    printf("\n YOU HAVE SELECTED AIRTEL REACHARGE CARD\n");
    airtelcard();
    break;

    case 3:
    printf("\n YOU HAVE SELECTED 9 MOBILE REACHARGE CARD\n");
    mobilecard();
    break;

    case 4:
    printf("\n YOU HAVE SELECTED GLO REACHARGE CARD\n");
    glocard();
    break;
    }

    break;
    }

    break;
    int yess;
    int nos;
    int cash;
    int two;
    int deposit;
    int amount3;
    int deposite;
    case 1234:

    printf("\n YOU HAVE SELECTED CASH DEPOSIT\n");
    printf("\n THIS ATM  ACCEPT 20000 AS THE HIGHEST DEPOSIT \n  AND IN MULTIPLES OF 1000 ONLY\n");
    printf("\n PRESS 2 TO CONTINUE\n");
    scanf("%d", &cash);
    printf("\n PLEASE ENTER THE ACCOUNT NUMBER YOU WANT TO DEPOSIT TO\n");
    scanf("%d", &deposite);
    printf("\n PLEASE WAIT WHY YOUR TRANSACTION IS PROCESSING!!!!!\n");
    sleep(2);
    printf("\n  THE ATM OPENS A CHANNEL WHERE YOU CAN PLACE YOUR MONEY\n");
    sleep(6);
    printf("\n PLEASE WAIT WHY YOUR TRANSACTION IS PROCESSING!!!!!\n");
    sleep(3);
    printf("\n AMOUNT YOU WANT TO DEPOSIT : %d\n", amount3);
    scanf("%d", &amount3);
    printf("\n PRESS 2 TO CONTINUE\n");
    scanf("%d", &two);
    sleep(2);
    printf("\n YOUR ACCOUNT NUMBER : %d\n", deposite);
    printf("\n NAME OF THE ACCOUNT HOLDER : MALAMI USMAN\n");
    printf("\n THE BANK NAME : UNITY BANK\n");
    printf("\n AMOUNT YOU WANT TO DEPOSIT : %d\n", amount3);
    printf("\n PRESS YES TO CONFIRM\n");
    scanf("%d", &deposit);
    sleep(2);
    printf("\n DEPOSIT SUCCEESSFUL!!!\n");
    printf("\n THANK YOU FOR BANKING WITH US\n");
    printf("\n PRESS 1 TO END THE TRANSACTION \n");
    scanf("%d", &nos);
    printf("\n PRESS 2 TO GO BACK TO THE MAIN MENU \n");
    scanf("%d", &yess);
    break;
  }
}

int main()

{
  menuatm();
  menuatm();
  menuatm();
  menuatm();
  menuatm();
  printf("\n YOU HAVE EXCEEDED YOUR DAILY LIMITS\n");
  
  return 0;
}
