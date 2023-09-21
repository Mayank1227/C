#include <stdio.h>
struct BankAccount 
{
  char bankName[20];
  int accountNumber;
  long long balance;
  char IFSCCode[11];
  int ATMPin;
};

int main() 
{
  struct BankAccount account;

  // Get the bank name from the user.
  printf("Enter the bank name: ");
  scanf("%s", account.bankName);

  // Get the account number from the user.
  printf("Enter the account number: ");
  scanf("%d", &account.accountNumber);

  // Get the account balance from the user.
  printf("Enter the account balance: ");
  scanf("%lld", &account.balance);

  // Get the IFSC code from the user.
  printf("Enter the IFSC code: ");
  scanf("%s", account.IFSCCode);

  // Get the ATM pin from the user.
  printf("Enter the ATM pin: ");
  scanf("%d", &account.ATMPin);

  // Print the account details.
  printf("Bank name: %s\n", account.bankName);
  printf("Account number: %d\n", account.accountNumber);
  printf("Account balance: %lld\n", account.balance);
  printf("IFSC code: %s\n", account.IFSCCode);
  printf("ATM pin: %d\n", account.ATMPin);

  return 0;
}
