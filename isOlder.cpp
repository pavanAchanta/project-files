/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

int isOlder(char *dob1, char *dob2) {
   int c=0;
    for(int i=0;i<10;i++)
    {
        if((dob1[i]>='0' && dob1[i]<='9')&&(dob1[i]>='0' && dob2[i]<='9')) c=c+dob1[i]-dob2[i];
        else if((dob1[i]=='-')&&(dob2[i]=='-')) continue;
        else return -1;
    }
    if(c>0) return 2;
    else if(c<0) return 1;
    else return 0;
}