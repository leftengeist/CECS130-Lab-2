#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
This program asks for a number, then creates a table that shows the exchange rate in the US Dollar, Canadian Dollar,
British Pounds, Euro, Australian Dollar, and the Russian Ruble of the input.

All outputs are rounded to the nearest cent, and input can be a decimal

Walton Levi, Section 1
*/

main()
{
	float fExchangeAmount;

	printf("Please input a number: ");
	scanf("%f", &fExchangeAmount);

	//USD Exchange
	float fUSDToCAD = fExchangeAmount * 1.24;
	float fUSDToGBP = fExchangeAmount * .72;
	float fUSDToEUR = fExchangeAmount * .82;
	float fUSDToAUD = fExchangeAmount * 1.25;
	float fUSDToRUB = fExchangeAmount * 56.53;

	//CAD Exchange
	float fCADToUSD = fExchangeAmount * .81;
	float fCADToGBP = fExchangeAmount * .58;
	float fCADToEUR = fExchangeAmount * .66;
	float fCADToAUD = fExchangeAmount * 1.01;
	float fCADToRUB = fExchangeAmount * 45.56;

	//GBP Exchange
	float fGBPToCAD = fExchangeAmount * 1.72;
	float fGBPToUSD = fExchangeAmount * 1.39;
	float fGBPToEUR = fExchangeAmount * 1.14;
	float fGBPToAUD = fExchangeAmount * 1.73;
	float fGBPToRUB = fExchangeAmount * 78.58;

	//EUR Exchange
	float fEURToCAD = fExchangeAmount * 1.52;
	float fEURToGBP = fExchangeAmount * .88;
	float fEURToUSD = fExchangeAmount * 1.23;
	float fEURToAUD = fExchangeAmount * 1.53;
	float fEURToRUB = fExchangeAmount * 69.24;

	//AUD Exchange;
	float fAUDToCAD = fExchangeAmount * .99;
	float fAUDToGBP = fExchangeAmount * .58;
	float fAUDToEUR = fExchangeAmount * .65;
	float fAUDToUSD = fExchangeAmount * .80;
	float fAUDToRUB = fExchangeAmount * 45.32;

	//RUB Exchange
	float fRUBToUSD = fExchangeAmount * .018;
	float fRUBToCAD = fExchangeAmount * .022;
	float fRUBToGBP = fExchangeAmount * .013;
	float fRUBToEUR = fExchangeAmount * .014;
	float fRUBToAUD = fExchangeAmount * .022;

	//Data Table
	printf("\n\t|USD\t|CAD\t|GBP\t|EUR\t|AUD\t|RUB");
	printf("\nUSD\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f", fExchangeAmount, fUSDToCAD, fUSDToGBP, fUSDToEUR, fUSDToAUD, fUSDToRUB);
	printf("\nCAD\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f", fCADToUSD, fExchangeAmount, fCADToGBP, fCADToEUR, fCADToAUD, fCADToRUB);
	printf("\nGBP\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f", fGBPToUSD, fGBPToCAD, fExchangeAmount, fGBPToEUR, fGBPToAUD, fGBPToRUB);
	printf("\nEUR\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f", fEURToUSD, fEURToCAD, fEURToGBP, fExchangeAmount, fEURToAUD, fEURToRUB);
	printf("\nAUD\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f", fAUDToUSD, fAUDToCAD, fAUDToGBP, fAUDToEUR, fExchangeAmount, fAUDToRUB);
	printf("\nRUB\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f", fRUBToUSD, fRUBToCAD, fRUBToGBP, fRUBToEUR, fRUBToAUD, fExchangeAmount);

	return 0;
}
