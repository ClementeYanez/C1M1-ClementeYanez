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



/**     print_statistics ********************************************************
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
 * @param <int   u_isize_of_array >  <1D array dimension.   >
 *
 * @return <None>
 */

 void print_array( u_8Bit * u_cptr_to_DataArr,int u_isize_of_array)



 /**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
 void find_median(int * int_ptr_to_DataArr, int int_size_of_array);



 /**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

 /**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

#endif /* __STATS_H__ */
