#include <stdio.h> 
 #include <string.h> 
  
 /** 
  *   * print_char - print a char twice 
  *    * @d: int ascii number for char 
  *     * Return: void 
  *     */ 
  
 void print_char(int d) 
	 { 
		          putchar(d); 
		   } 
  
 /** 
  *   * main - prints alphabets in lower case 
  *    * Return: int 0 
  *    */ 
  
 int main(void) 
	 { 
		          int num; 
		           int b; 
		            int i; 
		      
		             for (num = 48; num < 58; num++) 
			              { 
				                       for (i = 48; i < 58; i++) 
					                        { 
							                         for (b = 48; b < 58; b++) 
								                          { 
									                                   putchar(num); 
									                                    putchar(i); 
									                                     putchar(32); 
									                                      putchar(i); 
									                                       putchar(b); 
									                                        putchar(44); 
										                                 putchar(32); 
										                          } 
							                  } 
				                } 
		              print_char(57); 
		               return (0); 
		        }
