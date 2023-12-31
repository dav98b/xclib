/** 
 * Convert int into a string.
 *
 * @param n Value to be converted to a string
 *
 * @param buffer Array where the conversion result is stored
 * 
 * @param radix Number of unique digits used to represent `n` as a string
 *
 * @return Pointer to array containing the result, same as `buffer`.
 * 	When passed a non-valid radix argument, function will return NULL and set errno to EINVAL
 */
char * xitoa(int n, char *buffer, int radix);

char * xltoa(long n, char *buffer, int radix);

/**
 * convert a character string to a base-10 integer value.
 *
 * The xatoi() function stops reading the input string at the first character that it cannot 
 * recognize as part of a number. This character can be the null character that 
 * ends the string.
 *
 * @params str String to be converted
 *
 * @return The converted value or 0 on error
 */
int xatoi(const char *str);

/** 
 * calculate the length of a string.
 *
 * The xstrlen() function calculates the length of the string str, 
 * excluding the terminating null byte
 *
 * @param str 
 * 
 * @return Length of the string
 */
int xstrlen(const char *str);
int xstrlen0(const char *str); //TMP

/**
 * reverse a string.
 *
 * @param str String to be reversed
 *
 * @return Pointer to array containing the reversed string
 */
char * xstrrev(char *str);

