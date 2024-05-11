/*
 * Server.c
 *
 *  Created on: Apr 30, 2024
 *      Author: ziad
 */

#ifndef SERVER_SERVER_H_
#define SERVER_SERVER_H_

/*********** Section : Includes ***********/
#include  "../Lib/Includes.h"
#include  "../Lib/Std_Type.h"
#include "../Terminal/Terminal.h"



/*********** Section : Enum ***********/

typedef enum EN_transState_t
{
	APPROVED,
	DECLINED_INSUFFECIENT_FUND,
	DECLINED_STOLEN_CARD,
	FRAUD_CARD,
	INTERNAL_SERVER_ERROR
}EN_transState_t;

typedef enum EN_serverError_t
{
	SERVER_OK,
	SAVING_FAILED,
	TRANSACTION_NOT_FOUND,
	ACCOUNT_NOT_FOUND,
	LOW_BALANCE,
	BLOCKED_ACCOUNT
}EN_serverError_t;

typedef enum EN_accountStatus_t
{
	RUNNING,
	BLOCKED
}EN_accountStatus_t;

/*********** Section : Struct ***********/
typedef struct ST_transaction_t
{
	ST_CardData_t		cardHolderData;
	ST_terminalData_t	terminalData;
	EN_transState_t		transState;
	uint32_t			transactionSequenceNumber;
}ST_transaction_t;

typedef struct ST_accountsDB_t
{
	float32_t			balance;
	EN_accountStatus_t	state;
	uint8_t				primaryAccountNumber[20];
}ST_accountsDB_t;

/*********** Section : Functions Prototypes ***********/
EN_transState_t recieveTransactionData(ST_transaction_t *transData);
EN_serverError_t isValidAccount(ST_CardData_t *cardData, ST_accountsDB_t **accountRefrence);
EN_serverError_t isAmountAvailable(ST_terminalData_t *termData, ST_accountsDB_t *accountRefrence);
EN_serverError_t saveTransaction(ST_transaction_t *transData);
EN_serverError_t getTransaction(uint32_t transactionSequenceNumber, ST_transaction_t *transData);

#endif /* SERVER_SERVER_C_ */
