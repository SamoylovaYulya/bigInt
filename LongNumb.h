#include <iostream>
using namespace std;
class LongNumb
{
private:
int* value;
int base;
int* DigitToArray(int d,int base);
int* DeleteNull(int* c);
int* MinMax(int* a,int* b,char type);
void PrintMass(int* a);
int* CopyArray(int* arr, int* source, bool Memory);
bool CheckNegative(int* mas);
int* ReadFile(char* fileName,int base);
void WriteFile(int *mas,char *fileName,int base);
// Arithmetic Operations
int* Add(int *a, int *b,int *c,int base);
int* Sub(int *a,int *b,int *c,int base);
int* Multiplication(int *a,int *b,int *c,int base);
int* DivideOnDigit(int* mas, int digit, int* answer,bool retR,int base);
int* Dividing(int* u,int* v,int* q,bool retR,int base);
int* Pow(int* a,int* b,int* c,int base);
int* Mod(int* a,int* b,int base);
public:
//Constructor
LongNumb(){};
LongNumb(int num);
LongNumb(const LongNumb &a);
//Operators Overloading
LongNumb operator+(const LongNumb& rv);
LongNumb operator-(const LongNumb& rv);
LongNumb operator*(const LongNumb& rv);
LongNumb operator/(const LongNumb& rv);
LongNumb operator^(const LongNumb& rv);
LongNumb operator%(const LongNumb& rv);
bool operator==(const LongNumb& rv);
bool operator!=(const LongNumb& rv);
bool operator>=(const LongNumb& rv);
bool operator<=(const LongNumb& rv);
bool operator<(const LongNumb& rv);	
bool operator>(const LongNumb& rv);
//Other funcs
LongNumb Print();
LongNumb Read(char* fileName,int b);
LongNumb Write(char* fileName);
LongNumb Convert(int n);
LongNumb Copy(LongNumb a);
};
