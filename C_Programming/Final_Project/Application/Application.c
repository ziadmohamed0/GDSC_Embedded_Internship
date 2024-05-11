/*
 * Main.c
 *
 *  Created on: Apr 29, 2024
 *      Author: ziad
 */

/*********** Section : Includes ***********/
#include "Application.h"
/*********** Section :  Global Variables ***********/

/*********** Section : Function ***********/
void App (void)
{
	ST_CardData_t card;
    ST_terminalData_t terminal;
    ST_transaction_t transaction;

    if (EN_cardError_tgetCardHolderName(&card) != 0)
    {
        printf("FAILED: WRONG_NAME\n");
    }

    if (EN_cardError_tgetCardExpiryDate(&card) != 0)
    {
        printf("FAILED: WRONG_EXP_DATE\n");
    }

    if (EN_cardError_tgetCardHolderPan(&card) != 0)
    {
        printf("FAILED: WRONG_PAN\n");
    }

    if (EN_terminalError_tgetTransactionDate(&terminal) != 0)
    {
        printf("FAILED: WRONG_DATE\n");
    }

    if (EN_terminalError_tisCardExpired(&card, &terminal) != 0){
        printf("FAILED: EXPIRED_CARD\n");
    }

    if (EN_terminalError_tisValidCardPAN(&card) != 0)
    {
        printf("FAILED: INVALID_PAN\n");
    }

    if (EN_terminalError_tgetTransactionAmount(&terminal) != 0)
    {
        printf("FAILED: INVALID_AMOUNT\n");
    }

    if (EN_terminalError_tsetMaxAmount(&terminal) != 0)
    {
        printf("FAILED: INVALID_MAX_AMOUNT\n");
    }

    if (EN_terminalError_tisBelowMaxAmount(&terminal) != 0)
    {
        printf("FAILED: EXCEED_MAX_AMOUNT\n");
    }


    transaction.cardHolderData = card;
    transaction.terminalData = terminal;
    transaction.transactionSequenceNumber = 0;

    if(recieveTransactionData(&transaction) != 0){
        printf("FAILED: transaction failed\n");
    }

    printf("PASSED\n");

    if(saveTransaction(&transaction) != 0)
        printf("FAILED: SAVING_FAILED\n");
    else
        printf("transaction is saved sucessfully\n");
}
