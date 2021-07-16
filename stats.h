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
 * @file stat.h 
 * @brief <This file serves as the header of the implementation of several 
 * statistics functions >
 * < include statistic functions are
 *          Average
 *          Maximum
 *          Minimum
 *          Number Histogram            >
 *
 * @author Clemente Yanez
 * @date 15/07/2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/************************Typedefs ********************************************/
typedef unsigned char u_8Bit;



/************************MACROS***********************************************/




/***********************Functions********************************************/



/**  
 * 
 * @brief A function that calculates and prints the statistics of an array 
 *      
 *
 *   This function takes as an input a pointer to an array of 8 bits then calls 
 *      the corresponding functions and prints its results.
 *
 *   Statistic functions included are minimum, maximum, mean, and median.
 *
 * 
 *
 * @param <u_8Bit * u_cptr_to_DataArr> <Pointer to Data Array.>
 * @param <int u_isize_of_array       > <1D array dimension.   >
 *
 * @return <None>
 */
  
  void print_statistics(u_8Bit * u_cptr_to_DataArr, int u_isize_of_array);


/** 
 * 
 * @brief  Given an array of data and a length, function prints the array.
 *      
 * 
 *
 * @param <u_8Bit * u_cptr_to_DataArr>  <Pointer to Data Array.>
 * @param <int   u_isize_of_array    >  <1D array dimension.   >
 *
 * @return <None>
 */

 void print_array( u_8Bit * u_cptr_to_DataArr,int u_isize_of_array)



 /**
 * @brief Given an array of data and a length, return the median.
 *
 *    This function takes as an input an array pointer and returns the
 *      median in a char.
 *
 * @param <u_8Bit * u_cptr_to_DataArr>  <Pointer to Data Array.>
 * @param <int   u_isize_of_array    >  <1D array dimension.   >
 *
 * @return <Returns a char variable with the median>
 */
 u_8Bit find_median(u_8Bit * u_cptr_to_DataArr, int u_isize_of_array);



 /**
 * @brief Given an array of data and a length, returns the mean
 *
 *    This function takes as an input an array pointer and returns the
 *      meam in a char.
 *
 * @param <u_8Bit * u_cptr_to_DataArr>  <Pointer to Data Array.>
 * @param <int   u_isize_of_array    >  <1D array dimension.   >
 *
 * @return <Returns a char variable with the mean>
 */

 u_8Bit find_mean(u_8Bit * u_cptr_to_DataArr, int int_size_of_array);


 /**
 * @brief <Add Brief Description of Function Here>
 *
 *    This function takes as an input an array pointer and returns the
 *      maximum value in a char.
 *
 * @param <u_8Bit * u_cptr_to_DataArr>  <Pointer to Data Array.>
 * @param <int   u_isize_of_array    >  <1D array dimension.   >
 *
 * @return <Returns a char variable with the Macimum value>
 */

 u_8Bit find_maximum(u_8Bit * u_cptr_to_DataArr, int int_size_of_array);


/**
 * @brief <Add Brief Description of Function Here>
 *
 *    This function takes as an input an array pointer and returns the
 *      minimum value in a char.
 *
 * @param <u_8Bit * u_cptr_to_DataArr>  <Pointer to Data Array.>
 * @param <int   u_isize_of_array    >  <1D array dimension.   >
 *
 * @return <Returns a char variable with the minimum value>
 */

 u_8Bit find_minimum(u_8Bit * u_cptr_to_DataArr, int int_size_of_array);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. 
 *
 *    This function takes as an input an array pointer and sorts it, The zeroth 
 *      Element should be the largest value, and the last element (n-1) should 
 *      be the smallest value.
 *
 *
 * @param <u_8Bit * u_cptr_to_DataArr>  <Pointer to Data Array.>
 * @param <int   u_isize_of_array    >  <1D array dimension.   >
 *
 * @return <None>
 */

 void sort_array(u_8Bit * u_cptr_to_DataArr, int int_size_of_array);

#endif /* __STATS_H__ */
