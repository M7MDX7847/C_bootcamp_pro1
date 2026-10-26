#include<stdbool.h>
#include<stdio.h>
#include<string.h>
int main(){

    size_t password_length = strlen("M7md@78784545");

    bool has_min_length = true;
    bool has_numbers = true;
    bool has_small_letters = true;
    bool has_symbols = true;
    bool has_capital_letters = true;

    bool is_password_strong = has_min_length && has_symbols && has_numbers && has_small_letters && has_small_letters;

    if (is_password_strong == 1)
    {
        if(password_length >= 15){printf("password is strong");}

        else if (password_length >= 12){printf("password is medium");}

        else if (password_length >= 8){printf("password is week");}
    
        else{printf("password is to short");}
    }
    else{
        printf("password is week");
    }
    
    return 0;
}