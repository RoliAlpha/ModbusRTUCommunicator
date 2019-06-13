#include"dataConvertion.h"
/*
��������fת��Ϊ4���ֽ����ݴ����byte[4]��
*/
void Float_to_Byte(float f, unsigned char byte[])
{
	FloatLongType fl;
	fl.fdata = f;
	byte[0] = (unsigned char)fl.ldata;
	byte[1] = (unsigned char)(fl.ldata >> 8);
	byte[2] = (unsigned char)(fl.ldata >> 16);
	byte[3] = (unsigned char)(fl.ldata >> 24);
}
/*
��4���ֽ�����byte[4]ת��Ϊ�����������*f��
*/
void Byte_to_Float(float *f, unsigned char byte[])
{
	FloatLongType fl;
	fl.ldata = 0;
	fl.ldata = byte[3];
	fl.ldata = (fl.ldata << 8) | byte[2];
	fl.ldata = (fl.ldata << 8) | byte[1];
	fl.ldata = (fl.ldata << 8) | byte[0];
	*f = fl.fdata;
}
/*
��unsigned intת��Ϊ2���ֽ����ݴ����byte[2]��
*/
void Uint_to_Byte(unsigned int  i, unsigned char byte[])
{
	byte[0] = (unsigned char)i;
	byte[1] = (unsigned char)(i >> 8);
}
/*
��2���ֽ�����byte[2]ת��Ϊunsigned int�����*i��
*/
void Byte_to_Uint(unsigned int * i, unsigned char byte[])
{
	unsigned int i1 = 0;
	i1 = byte[1];
	i1 = (i1 << 8) | byte[0];
	*i = i1;
}