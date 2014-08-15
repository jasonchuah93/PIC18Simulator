#include <stdio.h>
#include "N.h"
#include "Interpret.h"
#include "StringObject.h"
#include "String.h"
#include "CustomTypeAssert.h"
#include "CException.h"
#include "ErrorCode.h"
#include "MaskTable.h"
#include "ExtractValue.h"



int N(String *arguments , int numberOfbits){
	int value,value1;
	int operand1;
	int opcode;
	value = maskTable[numberOfbits];
	value1 = operand1ExtractValue(arguments);	
	operand1 = value & value1;
	
	return opcode = operand1;
}

int N8(String *arguments){
	return N(arguments,7);
}

int N11(String *arguments){
	return N(arguments,10);
}

int N12(String *arguments){
	int operand1;
	int opcode;
	
	operand1 = operand1ExtractValue(arguments);
	
	return opcode = ((operand1&0xfff00)<<8) | (operand1 & 0xff);


}