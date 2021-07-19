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
/************************ MACROS***********************************************/
/* Size of the Data Set */
#define SIZE (40)
#define PRINTING_ROW_LENGHT (10)
#define PRINTING_TITLE_SEGMENT ("****************************************************************\n")
#define NO_CHANGES_IN_BUBBLE_SORT (0)
#define CHANGES_IN_BUBBLE_SORT (1)





void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Statistics and Printing Functions Go Here */

   print_array(&test[0], (int) SIZE );

   print_statistics(&test[0], (int) SIZE);

}




void print_statistics(u_8Bit * u_cptr_to_DataArr, int u_isize_of_array)
{
   u_8Bit u_cstat_aux_value;

   printf("Statistics ");
   printf(PRINTING_TITLE_SEGMENT );

   u_cstat_aux_value = find_median(u_cptr_to_DataArr, u_isize_of_array);

   printf("Median: %d\n", u_cstat_aux_value);

   u_cstat_aux_value = find_mean(u_cptr_to_DataArr, u_isize_of_array);

   printf("Mean: %d\n", u_cstat_aux_value);

   u_cstat_aux_value = find_maximum(u_cptr_to_DataArr, u_isize_of_array);

   printf("Max Value: %d\n", u_cstat_aux_value);

   u_cstat_aux_value = find_minimum(u_cptr_to_DataArr, u_isize_of_array);

   printf("Min Value: %d\n\n", u_cstat_aux_value);

   printf(PRINTING_TITLE_SEGMENT );


}


void print_array( u_8Bit * u_cptr_to_DataArr,int u_isize_of_array)
{

   printf("Data array ");
   printf(PRINTING_TITLE_SEGMENT );

   for(int j = 0; j<(u_isize_of_array/PRINTING_ROW_LENGHT);j++)
   {
      for(int i = 0; i< (PRINTING_ROW_LENGHT); i++ )
      {
         printf("%d\t",  *(u_cptr_to_DataArr+i+(j*PRINTING_ROW_LENGHT)) );
      }
      printf("\n");
   }
   printf("\n");

}



u_8Bit find_median(u_8Bit * u_cptr_to_DataArr, int int_size_of_array)
{
   u_8Bit u_cmedian_aux_var;

   sort_array(u_cptr_to_DataArr, int_size_of_array);

   /* median if number of values is an odd number*/

   u_cmedian_aux_var = *(u_cptr_to_DataArr + (int_size_of_array/2-1));

   /* Exception handler if size of array is a pair number*/

   if((int_size_of_array%2) == 0)
   {
      u_cmedian_aux_var = u_cmedian_aux_var + *(u_cptr_to_DataArr + (int_size_of_array/2));
      u_cmedian_aux_var /= 2;
   }


   return u_cmedian_aux_var;

}


u_8Bit find_mean(u_8Bit * u_cptr_to_DataArr, int int_size_of_array)
{
   int u_cmean = 0;

   for(int i= 0; i<int_size_of_array; i++)
   {
      u_cmean += *(u_cptr_to_DataArr+i);
   }

   u_cmean /= int_size_of_array;

   return u_cmean;
}


u_8Bit find_maximum(u_8Bit * u_cptr_to_DataArr, int int_size_of_array)
{
 
   return (*u_cptr_to_DataArr);
}


u_8Bit find_minimum(u_8Bit * u_cptr_to_DataArr, int int_size_of_array)
{
   return (*(u_cptr_to_DataArr+int_size_of_array-1));
}


void sort_array(u_8Bit * u_cptr_to_DataArr, int int_size_of_array)
{
   u_8Bit u_cswitch_assist_var = 0;
   u_8Bit u_cchanges_flag; 


  do 
  {
     u_cchanges_flag = NO_CHANGES_IN_BUBBLE_SORT;
     for(int i=1; i<int_size_of_array; i++ )
     {
        
        if(*(u_cptr_to_DataArr+i)> *(u_cptr_to_DataArr+i-1))
        {
           u_cswitch_assist_var     = *(u_cptr_to_DataArr+i);
           *(u_cptr_to_DataArr+i)   = *(u_cptr_to_DataArr+i-1);
           *(u_cptr_to_DataArr+i-1) = u_cswitch_assist_var;
           u_cchanges_flag = CHANGES_IN_BUBBLE_SORT;

        }

     }
  } while(  NO_CHANGES_IN_BUBBLE_SORT != u_cchanges_flag );

}