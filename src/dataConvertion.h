#pragma once

#include <Arduino.h>
#ifndef _dataConvertion
#define _dataConvertion
#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

#include <stdio.h>
/*
1. float��unsigned long������ͬ�����ݽṹ����
2. union������������ݴ������ͬ������ռ�
*/
typedef union
{
	float fdata;
	unsigned long ldata;
}FloatLongType;
/*
��������fת��Ϊ4���ֽ����ݴ����byte[4]��
*/
void Float_to_Byte(float f, unsigned char byte[]);
/*
��4���ֽ�����byte[4]ת��Ϊ�����������*f��
*/
void Byte_to_Float(float *f, unsigned char byte[]);
/*
��unsigned intת��Ϊ2���ֽ����ݴ����byte[2]��
*/
void Uint_to_Byte(unsigned int  i, unsigned char byte[]);
/*
��2���ֽ�����byte[2]ת��Ϊunsigned int�����*i��
*/
void Byte_to_Uint(unsigned int * i, unsigned char byte[]);
#endif