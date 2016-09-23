/*
* Steven Romeiro
* U16803837
* Homework 7
* COP 3514
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

/******************************PROTOTYPES**************************************/
int numberOfCharacters(FILE *file);
int numberOfWords(FILE *file);
int searchArray(char **array, char *string, int arraySize);
int bagOfWords(FILE *file);
int numberOfLines(FILE *file);

int main(int argc, char *argv[])
{
  FILE *fileName;
  int i;

  if(argc != 2)
  {
    fprintf(stderr, "Invalid number of arguments.\n");
    fprintf(stderr, "Usage: %s filename.txt\n", argv[0]);
    return 1;
  }

  fileName = fopen(argv[1], "r");
  if(fileName == NULL)
  {
    //Show error if file could not be opened
    fprintf(stderr, "Could not open \"%s\"\n", argv[1]);
    return 1;
  }

  i = numberOfCharacters(fileName);
  printf("Number of characters in this file is: %d\n", i);
  i = numberOfWords(fileName);
  printf("Number of words in this file is: %d\n", i);
  //WARNING: Unix based systems add a newline character at the end of the file
  //Logic built with Unix based system assumption
  i = numberOfLines(fileName);
  printf("Number of lines in this file is: %d\n", i);
  bagOfWords(fileName);
  printf("Bag of words generated\n");
  fclose(fileName);

  //Successful program termination
  return 0;
}

/*******************************DEFINITIONS************************************/

//Counts the number of characters in a file
int numberOfCharacters(FILE *file)
{
  int count = 0;

  while(fgetc(file) != EOF)
  {
    count++;
  }

  rewind(file);
  return count;
}

//Counts the number of words in a file
int numberOfWords(FILE *file)
{
  int count = 0;
  int ch, previous = '1';
  while((ch = fgetc(file)) != EOF)
  {
    //Found a new char.
    //Check to see if it's a space or punctuation
    if((isspace(ch) || ispunct(ch)))
    {
      //Space or punctuation means it's the end of the word
      if (isspace(previous) || ispunct(previous))
      {
        //Quick check to see if double space/punctuation appears.
        //If so, update previous and ignore.
        previous = ch;
        continue;
      }
      //End of word so increment count
      count++;

    }
    //Update previous before looping again
    previous = ch;
  }

  rewind(file);
  return count;
}

//Creates bagofwords.txt in current directory with all the words that show up
//in the file along with how many times that word appears.
int bagOfWords(FILE *file)
{
  int wordCount = 0, stringSize = 0, arraySize = 20, *wordCountArray, stringPosition;
  char **words, string[50];
  int ch, i, previous = '1';
  FILE *bag;

  //Create dynamic arrays
  words = malloc(sizeof(char *) * arraySize);
  wordCountArray = malloc(sizeof(int) * arraySize);
  if(words == NULL)
  {
    //Checking if allocation returned NULL
    fprintf(stderr, "Memory allocation unsuccessful. Exiting program.\n");
    return(1);
  }

  //Loop until all char in the file have been read
  while ((ch = fgetc(file)) != EOF)
  {
    //Found a new char. Copy char into array.
    //Check to see if it's a space or punctuation
    if((isspace(ch) || ispunct(ch)))
    {
      //Space or punctuation means it's the end of the word
      if (isspace(previous) || ispunct(previous))
      {
        //Quick check to see if double space/punctuation appears.
        //If so, set the current char to previous and loop again.
        previous = ch;
        continue;
      }

      //End of word requires a null character at the end of the array
      string[stringSize++] = '\0';
      //Searches the array for the current word to see if it exists
      //searchArray function returns a -1 if word was not found in array
      stringPosition = searchArray(words, string, wordCount);
      if (stringPosition == -1)
      {
        //It's a new word, store it in the array.
        if(wordCount == arraySize)
        {
          //Before storing, check if array can support a new word
          //If not, reallocate for more space.
          arraySize+= 20;
          words = realloc(words, sizeof(char *) * arraySize);
          wordCountArray = realloc(wordCountArray, sizeof(int) * arraySize);
        }
        //Creates dynamic array for the word then copies it in
        words[wordCount] = malloc(sizeof( char) * stringSize);
        strcpy(words[wordCount], string);
        //First word of its kind. Set count to 1. Increment as more are found.
        wordCountArray[wordCount] = 1;
        wordCount++;
      }

      else
      {
        //Word already exists, increment its count
        wordCountArray[stringPosition] += 1;
      }
      //Reset the string size and get ready for a new word
      stringSize = 0;
    }

    else
    {
      //Char found is not a space or punctuation. Word continues, copy to array.
      string[stringSize++] = (char)ch;
    }
    //Sets previous character before looping again.
    previous = ch;
  }



  //Creates the bagofwords.txt file
  bag = fopen("bagofwords.txt", "w");
  for(i = 0; i < wordCount; i++)
  {
    //Puts all the words and their respective counts in the file
    fprintf(bag, "%s : %d\n", words[i], wordCountArray[i]);
    free(words[i]);
  }
  free(wordCountArray);
  free(words);
  fclose(bag);
  return 0;
}

//Searches the array for requested word and returns its first index. Returns -1 otherwise.
int searchArray(char **array, char *string, int arraySize)
{
  int index = -1, i;
  for(i = 0; i < arraySize; i++)
  {
    //Compares strings ignoring case
    if(strcasecmp(array[i], string) == 0)
    {
      index = i;
      break;
    }
  }

  return index;
}

//Counts the number of lines in a file
int numberOfLines(FILE *file)
{
  int count = 0;
  int ch;
  while((ch = fgetc(file)) != EOF)
  {
    if(ch == '\n')
    {
      count++;
    }
  }

  rewind(file);
  return count;
}
