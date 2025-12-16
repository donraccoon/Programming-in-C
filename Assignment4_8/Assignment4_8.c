/*
Student1: Lars Meijer
Number1: s3662780
Student2: Rob Loman
Number1: s3318559
Assignment: 4.8
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX_LINE 1024 // Buffer size for one line of input


int count_word(const char *line, const char *word_find){ // a function for counting how many times a word 
    int count = 0;
    size_t len_line = strlen(line); // gets the length of the line being searched
    size_t len_word = strlen(word_find); // gets the length of the input word

    if (len_word == 0 || len_word > len_line) return 0;

    for (size_t i = 0; i <= len_line - len_word; i++){ // Loop through the line
        if (strncmp(&line[i], word_find, len_word) == 0){// Check if substring at current position matches the word
            count++; // true add up the count
        }
    }
    return count;
}

int main(int argc, char *argv[])
{
    if (argc <2) {fprintf(stderr, "No argument given\n"); return 0;} //prints the no argument given error if no argument is given

    char buf[MAX_LINE];   // Buffer for storing the input line
    const char *word = argv[1]; // reads the first word after the run command 
    int count_tot = 0; // Initialize total count


    while(fgets(buf, MAX_LINE, stdin) != NULL) { // Read lines from standard input (stdin) until EOF or NULL
        if (strncmp(buf, "#EOF", 4) == 0){ break;}// Check for the termination marker and stops reading then

        count_tot += count_word(buf, word);// Add the count for the current line to the total
    }

   printf("%d\n", count_tot); // Print the final count
   return 0;
}

/*Test text: 
Let it be, let it be, let it be, let it be.
Whisper words of wisdom, let it be.
#EOF
*/