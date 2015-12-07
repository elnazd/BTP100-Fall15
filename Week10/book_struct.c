/*Design and code a struct named Book that keeps the following information about a book. 
•	A c-style string, no larger than 20, representing the book’s author 
•	A c-style string, no larger than 30, representing the book’s title 
•	An integer representing the publication year 
*/
struct Book{
	char author[21];
	char title[31];
	int year;	
};

/*void displayRecords(struct Book item,const char fileName[])- This function receives a c-style string representing the name of a file. The function opens the file, reads it and displays the information to the user. Part of the file looks like the following:

Persuasion,Jane Austen,1818
Victor Hugo,Les Miserables,1862
*/
void displayRecords(struct Book item,const char *fileName)
{
	FILE *fp = fopen(fileName,"r");
	if(fp != NULL){
		//the file is opened successfully
		while(!feof(fp)){
			fscanf(fp,"%[^,],%[^,],%d\n",item.title,item.author,  
			&item.year);
			
			printf("%s,%s,%d\n",item.title,item.author,item.year);
			
		}
		
	}
	else
		printf("Error! Cannot open the file!");
	
	
}



/*int  isEqual(struct Book bookOne, struct Book bookTwo)– a function that accepts two arguments of type Book and checks if two arguments are equal. Two books are equal if they have same title and same author. The function returns 1 if the books are equal and 0 otherwise.
*/

int  isEqual(struct Book bookOne, struct Book bookTwo)
{
	int equal = 0;
	
	if(strcmp(bookOne.title,bookTwo.title) == 0 &&
		strcmp(bookOne.author,bookTwo.author)==0)
		equal = 1;
	else
		equal=0;
	
	return equal;	
	
}




