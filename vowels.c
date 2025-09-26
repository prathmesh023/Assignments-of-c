//Write a program to count the number of vowels in a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    int i; 
    int count=0;

    printf("Enter a string: ");
    fgets(str,100,stdin);

    for(i=0; str[i]; i++)
    
        if(strchr("aeiou AEIOU", str[i]))
            count++;

    printf("Vowels = %d", count);
    return 0;
}

//  Output=
//  Enter a string: a
//  Vowels = 1
//  
//  
//  Enter a string: A
//  Vowels = 1
//  
//  Enter a string: W
//  Vowels = 0