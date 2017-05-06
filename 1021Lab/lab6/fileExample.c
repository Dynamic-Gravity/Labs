#include <stdio.h>
#include <ctype.h>

/*Function prototype*/
void swapCase (FILE *in, FILE *out);

/*Using command line arguments*/
int main (int argc, char *argv[])
 {

	/*creating file pointers that will be used to loop through the txt files*/
	FILE *in, *out;

	/*opening the in.txt to be read
	 *opening the out.txt to be written to*/
	in = fopen(argv[1], "r");
	out = fopen(argv[2], "w");

	/*calling the swap function*/
	swapCase(in, out);

	/*since you opened a file, you need to close them*/
	fclose(in);
	fclose(out);

	return 0;

}

/*void function which will print out the in.txt file to the out.txt
 file just with the lower case and upper case letters swapped
 it takes FILE pointers as parameters*/
void swapCase(FILE *in, FILE *out)
 {

	char c;

  /*This while loop first grabs 1 character from the in file (c = getc(in)), it
	 *then checks to see if the character it grabbed is at the end
	 *of the file. If it is then this stops*/
	while ((c = getc(in)) != EOF)
	 {
    /*Remember all characters are represented by the ascii code.
		 *http://www.ascii-code.com/
		 *Using the ascii values for each character, now check to see if it is
		 *an uppercase letter.  If it is add 32 to the number to make it lowercase
		 *and use putc to print it to the file called out.  The else if part does
		 *the opposite.   The last else address any character address anything
		 *other than a character of the alphabet.*/

		 if(isupper(c))
		  {
		 		tolower(c);
				put(c, out);
			}
			else
			{
				toupper(c);
				put(c, out);
			}
//Ascii Value style
		 /*
		if (c >= 65 && c <=90) {
	   		c = c + 32;
	   		putc(c, out);
		}
		else if (c >= 97 && c <= 122) {
	   		c = c - 32;
	   		putc(c, out);
		}
		else {
			putc(c, out);
		}
		*/
	}
	return;
}
