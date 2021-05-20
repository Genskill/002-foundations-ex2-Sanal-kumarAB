#include <stdio.h>
#include <cs50.h>

int main(void){
	int val,row,i,j,k;
	val = get_int("");
	row = get_int("");

	if(val==1){
		for(i=row;i>0;i--){
			for(j=i;j>0;j--){
				printf("#");
			}
			printf("\n");
		}
	}
	else{
		for(i=0;i<row;i++){
			for(k=0;k<row-i-1;k++){
				printf(" ");
			}
			for(j=0;j<i+1;j++){
				printf("#");


			}
			printf("\n");
		}
	}

}









/*Write a program called patterns.c. It should be able to print 2 types of patterns. It should first ask for a type of pattern where you can enter 1 or 2. Pattern 1 looks like this

#####
####
###
##
#
Pattern 2 looks like this

    #
   ##
  ###
 ####
#####
After that, it should ask you for the number of rows. Here is pattern 1 with 2, 3, and 4 rows

2 rows

##
#
3 rows

###
##
#
4 rows

####
###
##
#
Here is pattern 2 with 2, 3, and 4 rows

2

  #
 ##
3

   # 
  ##
 ###
4

   # 
  ##
 ###
####
Please make sure that you don't print unnecessary newlines. The tests will fail if you do.

Examples
For pattern 1

$ ./patterns
Enter type of pattern (1 or 2) 1
Number of rows 6
######
#####
####
###
##
#
For pattern 2

 $ ./patterns
 Enter type of pattern (1 or 2) 2
 Number of rows 6
        #
       ##
      ###
     ####
    #####
   ######
Hints
Here is an output with the spaces replaced by . in pattern 2 so that you know how many spaces to print in each of the patterns

$ ./patterns
Enter type of pattern (1 or 2) 2
Number of rows4
...#
..##
.###
####*/
