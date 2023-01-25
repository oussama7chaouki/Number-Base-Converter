# Number-Base-Converter
  This C program is designed to convert a number from any base (between 2 and 16) to any other base (between 2 and 16) that is provided by the user as input. 

The program takes in a number as a string, the current base of the number, and the target base to convert to.

The program first converts the input number from the current base to decimal using the numero() function. This function uses the ASCII values of the digits in the input number to convert them to their corresponding decimal value. It also checks if the input number belongs to the current base.

Once the number is in decimal, the program converts it to the target base using the string() function. This function uses a while loop to convert the decimal number to the target base, by continually dividing the number by the target base and taking the remainder. It also uses the ASCII values of the digits to convert them to their corresponding characters.

The program also contains a main function that takes the input, calls the necessary functions, and prints the final result. The program also has a feature that allows the user to continue using the program or to exit it.
