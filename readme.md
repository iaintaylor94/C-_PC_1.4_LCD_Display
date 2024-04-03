# Programming Challenges C++
## Problem 1.4 LCD Display[^1]
### Problem description
This program prints several digits to the terminal at a predetermined size in digital format. The digits and size are input to the program, each line contains the size (1 <= s <= 10), followed by the number to print (0 <= n <= 99,999,999). The program is terminated when the size and number are both zero.


### Example 
>**Input**                                                                 
>2 12345                                                          
>3 67890                                              
>0 0                                                                                                                                             

>**Output**   !!CHECK IN EDITOR!!                         
>      __    __         __                                        
>   |     |    | |   | |                                               
>   |     |    | |   | |                                        
>      __   __     __   __                       
>   | |        |     |    |                                   
>   | |        |     |    |                                       
>      __   __          __                          
>                                                 
>                                                        
>  ___   ___   ___   ___   ___                                      
> |         | |   | |   | |   |                             
> |         | |   | |   | |   |                                    
> |         | |   | |   | |   |                                     
>  ___         ___   ___                                              
> |   |     | |   |     | |   |                                            
> |   |     | |   |     | |   |                                           
> |   |     | |   |     | |   |                                                  
>  ___         ___         ___                                                                           


### Problem solution
1. The program will read in the size and number from a file
2. If the dimension are (0, 0) end program.
3. The sub-digit lines are constructed for the appropriate size.
4. The digits are created by stacking the sub-digits on top of each other.
5. An array of the appropriate size to contain the output is created.
6. The digits in the number are copied to this array.
7. The previous array is printed.
8. Return to 1.

### Bug Checklist
- [ ] NA

[^1]: Programming Challenges By S.Skienna and M.Revilla, page 18