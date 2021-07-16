/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stat.c> 
 * @brief <This file implements several basic statistics functions, takes an array of SIZE size and process it >
 *
 * < included statitics functions are:
 *          Average
 *          Maximum
 *          Minimum
 *          Number Histogram            >
 *
 * @author <Clemente Yanez>
 * @date <15/07/2021>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)






void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */



}




void print_statistics(u_8Bit * u_cptr_to_DataArr, int u_isize_of_array);
{
   // Print Array of statistics with size SIZE 

}


void print_array( u_8Bit * u_cptr_to_DataArr,int u_isize_of_array)
{
   // Print Array of Data with size SIZE 

}



u_8Bit find_median(u_8Bit * u_cptr_to_DataArr, int int_size_of_array)
{
   // code to find the median

}


u_8Bit find_mean(u_8Bit * u_cptr_to_DataArr, int int_size_of_array)
{
   //Code to find the mean

}


u_8Bit find_maximum(u_8Bit * u_cptr_to_DataArr, int int_size_of_array)
{
  //code to find the max value

}


u_8Bit find_minimum(u_8Bit * u_cptr_to_DataArr, int int_size_of_array)
{
  //code to find the min value

}


void sort_array(u_8Bit * u_cptr_to_DataArr, int int_size_of_array)
{
  // code to sort the array

}