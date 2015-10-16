// Name: Daniel Calderon
// Date: October 15, 2015
// Functions D programming homework
#include <cassert>
#include <iostream>
#include <string>
#include<cmath>

using namespace std;
void sort(int& numA, int& numB, int& numC);
void numDigits(int  valA, int& n);
void computeSphere(double& a, double& v, double r);
void swap(int& A, int& B);

int main()
{
//***********************Function 1*****************************************************
//Summary: Arranges numbers in ascending order
//Precondition:If value is not within range,0-100. Asserts fail and program exits.
    int numA = 0, numB = 8, numC = 2;
    sort(numA,numB,numC);
    assert(numA == 0);
    assert(numB == 2);
    assert(numC == 8);
    int numA1 = 3, numB1 = 8, numC1 = 2;
    sort(numA1,numB1,numC1);
    assert(numA1 == 2);
    assert(numB1 == 3);
    assert(numC1 == 8);
//Postcondition:After using the sort funtion the values are arranged in ascending order.
//************************Function 2******************************************************
//Summary:Gives the number of digits in a number.
//Precondition: If values are not within range,-1000 to 1000 asserts fail and program exits.
    int n;
    numDigits(34, n);
    assert(n == 2);
    int n1;
    numDigits(9879, n1);
    assert(n1 == 4);
// Postcondition: After inputing the desired number, the function returns the number of digits
//************************Function 3*******************************************************
//Summary: Computes the area and volume of a sphere
//Precondition: If the value is not within the range 0 ,10000,  the assert will fail ending the program
    double a, v, E;
    E = .0001;
    computeSphere(a, v, 4.5);
    assert((a - 254.469) < E );
    assert((v - 381.7) < E );
    double a1, v1;
    computeSphere(a1, v1, 0);
    assert(( a1 - 0) < E);
    assert(( v1 - 0) < E);
//Postcondition: Aster running the program the appropriate values for area and volume are given out.
//****************************Function 4*************************************************************
//Summary: Swaps the A B int values around.
//Precondition:The program runs if the preconditions are met beforehand, a positive value.If not it exits the program
    int A=1 ,B=2;
    swap(A, B);
    assert( A == 2);
    assert( B == 1);
    int A1=3 ,B1=5;
    swap(A1, B1);   
    assert( A1 == 5);
    assert( B1 == 3);
//Postcondition: After running the program the numbers swap and the function returns the appropriate values

return 0;
}
//****************************Function 1************************************************
void sort(int& numA, int& numB, int& numC)
{ 
    assert(numA <= 100);
    assert(numA>=0);
    assert(numB <= 100);
    assert(numB>=0);
    assert(numC <= 100);
    assert(numC >= 0);   
    int tempA,tempB,temp;  

if ((numA > numB) && (numA > numC))
    {
       tempA = numA;
        
        if (numB > numC)
        {
            numA = numC;
            numC = tempA;
        }
        else if (numC > numB)
        {
            numA = numB;
            numB = numC;
            numC = tempA;
        }      
    }        
       
    else if ((numB > numC) && (numB > numA))
    {
         tempB = numB;
        if (numA > numC)
        {
            numB = numA;
            numA = numC;
            numC = tempB;
        }
        else if (numC > numA)
        {
            numB = numC;
            numC = tempB;
        }                        
    }
    
    else if ((numC > numA) && (numC > numB))
    {
        if (numA > numB)
        {
            temp = numA;
            numA = numB;
            numB = temp;
                    
        }
        else if (numB > numA)
        {
            numA;
            numB;
            numC;
        }                               
    }       
    return;
}
//*******************************Function 2********************************************************
void numDigits(int  valA, int& n)
{
    assert(valA >= -10000);
    assert(valA <= 10000);
    int valB;
    valB = abs(valA);
    if(valB >= 10000)
    {
        n=5;
    }
    if(valB >= 1000 && valB < 10000)
    {
        n=4;
    }
    if(valB >= 100 && valB < 1000)
    {
        n=3;
    }
    if(valB >= 10 && valB < 100)
    {
        n=2;
    }
    if(valB >= 0 && valB < 10)
    {
        n=1;
    }
    return;
}
//****************************Function 3******************************************************************
void computeSphere(double& a, double& v, double r)
{
    assert(r >= 0);
    assert(r <= 10000);
    const double pi = 3.14159265359;
    a = 4 * pi * r * r;
    v = ((1/3) * pi * r * r * r);
return;
}
//****************************Function 4******************************************************************
void swap(int& A, int& B)
{
    assert(A >= 0);
    assert(B >= 0);
    int temp;
    temp = B;
    B = A;
    A = temp;
  return;
}













