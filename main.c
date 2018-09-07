/*This program was created for the purpose of asking the user for a series of numbers and then calculating the average
 *
 * Author: Angel Daniel Olvera Perales
 * Date: September 6
 * email:angelolvera00@gmail.com
 */
#include <stdio.h>

int main() {
//Variables are declared
    float sum =- 1;
    double average =0;
    float num;
// Do while loop starts
    do{
        // The program will keep asking the user to input numbers until..
        printf("Enter a number:");
        scanf("%f", &num);
        average += num;
        sum += 1;
    }
    //The user writes 0, that's when the loop ends and starts calculating the average
    while(num !=0);

    //The average is calculated  by performing a sum of the numbers the user entered and dividing them by the amount of numbers they entered, except for the zero.
    average /= sum;
    //The average is shown
    printf("Average is : %lf", average);
    return 0;
}