# Getting-array-from-user-input



The print function loops through the passed in array, printing the values within until the loop is over (passed in integer).

In the main method i declared a size that i will be using for the array, an empty array and an integer to count the amount of entries initialized to 0.
The user is instructed to input up to 10 numerical values, then a for loop starts to take user input up to 10 times. The If statement returns true if the cin value is numerical. Since the array is an integer, the if statement is only true if user inputs an integer. If the input is a number, count will increase by 1 each time. 
If the statement returns false then the loop is broken out of.
Finally the printing function is called, passing in the array and the count, which was however amount of times a user put in a number.


note: you dont want to print all 10 array elements with SIZE because if a user only enters 5 values, we only want to print those 5. Otherwise if we print all 10 with only 5 elements, we will get a bunch of random numbers.
