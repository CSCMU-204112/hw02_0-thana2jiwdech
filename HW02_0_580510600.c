/* Thana Jiwdech
 * 580510600
 * HW 02
 * Problem 0
 * 204112 Sec 001 */

#include "T112_HW02_0.h"

int most_frequent_digit(int num)
{
    int result = NULL;
    int num_result[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if (num < 0) {
        num = num * -1;
    }
    while ( num > 0) {
        result = num % 10;
        num = num / 10;

        if (result == 0) {
            num_result[0] = num_result[0] + 1;
        } else if (result == 1) {
            num_result[1] = num_result[1] + 1 ;
        } else if (result == 2) {
            num_result[2] = num_result[2] + 1 ;
        } else if (result == 3) {
            num_result[3] = num_result[3] + 1 ;
        } else if (result == 4) {
            num_result[4] = num_result[4] + 1 ;
        } else if (result == 5) {
            num_result[5] = num_result[5] + 1 ;
        } else if (result == 6) {
            num_result[6] = num_result[6] + 1 ;
        } else if (result == 7) {
            num_result[7] = num_result[7] + 1 ;
        } else if (result == 8) {
            num_result[8] = num_result[8] + 1 ;
        } else if (result == 9) {
            num_result[9] = num_result[9] + 1 ;
        }
    }

    if (num_result[0] >= num_result[1] && num_result[0] >= num_result[2] && num_result[0] >= num_result[3] && num_result[0] >= num_result[4] && num_result[0] >= num_result[5] && num_result[0] >= num_result[6] && num_result[0] >= num_result[7] && num_result[0] >= num_result[8] && num_result[0] >= num_result[9]) {
        result = 0;
    } else if (num_result[1] >= num_result[0] && num_result[1] >= num_result[2] && num_result[1] >= num_result[3] && num_result[1] >= num_result[4] && num_result[1] >= num_result[5] && num_result[1] >= num_result[6] && num_result[1] >= num_result[7] && num_result[1] >= num_result[8] && num_result[1] >= num_result[9]) {
        result = 1;
    } else if (num_result[2] >= num_result[0] && num_result[2] >= num_result[1] && num_result[2] >= num_result[3] && num_result[2] >= num_result[4] && num_result[2] >= num_result[5] && num_result[2] >= num_result[6] && num_result[2] >= num_result[7] && num_result[2] >= num_result[8] && num_result[2] >= num_result[9]) {
        result = 2;
    } else if (num_result[3] >= num_result[0] && num_result[3] >= num_result[1] && num_result[3] >= num_result[2] && num_result[3] >= num_result[4] && num_result[3] >= num_result[5] && num_result[3] >= num_result[6] && num_result[3] >= num_result[7] && num_result[3] >= num_result[8] && num_result[3] >= num_result[9]) {
        result = 3;
    } else if (num_result[4] >= num_result[0] && num_result[4] >= num_result[1] && num_result[4] >= num_result[2] && num_result[4] >= num_result[3] && num_result[4] >= num_result[5] && num_result[4] >= num_result[6] && num_result[4] >= num_result[7] && num_result[4] >= num_result[8] && num_result[4] >= num_result[9]) {
        result = 4;
    } else if (num_result[5] >= num_result[0] && num_result[5] >= num_result[1] && num_result[5] >= num_result[2] && num_result[5] >= num_result[3] && num_result[5] >= num_result[4] && num_result[5] >= num_result[6] && num_result[5] >= num_result[7] && num_result[5] >= num_result[8] && num_result[5] >= num_result[9]) {
        result = 5;
    } else if (num_result[6] >= num_result[0] && num_result[6] >= num_result[1] && num_result[6] >= num_result[2] && num_result[6] >= num_result[3] && num_result[6] >= num_result[4] && num_result[6] >= num_result[5] && num_result[6] >= num_result[7] && num_result[6] >= num_result[8] && num_result[6] >= num_result[9]) {
        result = 6;
    } else if (num_result[7] >= num_result[0] && num_result[7] >= num_result[1] && num_result[7] >= num_result[2] && num_result[7] >= num_result[3] && num_result[7] >= num_result[4] && num_result[7] >= num_result[5] && num_result[7] >= num_result[6] && num_result[7] >= num_result[8] && num_result[7] >= num_result[9]) {
        result = 7;
    } else if (num_result[8] >= num_result[0] && num_result[8] >= num_result[1] && num_result[8] >= num_result[2] && num_result[8] >= num_result[3] && num_result[8] >= num_result[4] && num_result[8] >= num_result[5] && num_result[8] >= num_result[6] && num_result[8] >= num_result[7] && num_result[8] >= num_result[9]) {
        result = 8;
    } else if (num_result[9] >= num_result[0] && num_result[9] >= num_result[1] && num_result[9] >= num_result[2] && num_result[9] >= num_result[3] && num_result[9] >= num_result[4] && num_result[9] >= num_result[5] && num_result[9] >= num_result[6] && num_result[9] >= num_result[7] && num_result[9] >= num_result[8]) {
        result = 9;
    }


    return result;
}