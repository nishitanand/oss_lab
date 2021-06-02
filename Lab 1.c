# include <stdio.h>
# include <string.h>

int main( )
{

    //Writing to a file in C

	FILE *filePointer ;

	char dataToBeWritten[50]
		= "Program showing File Handling in C";

	filePointer = fopen("sample.c", "w") ;


	if ( filePointer == NULL )
	{
		printf( "sample.c file failed to open." ) ;
	}
	else
	{

		printf("The file is now opened.\n") ;

		if ( strlen ( dataToBeWritten ) > 0 )
		{

			fputs(dataToBeWritten, filePointer) ;
			fputs("\n", filePointer) ;
		}

		fclose(filePointer) ;

		printf("Data successfully written in file sample.c\n");
		printf("The file is now closed.") ;
	}

    //Reading from a file in C

	FILE *filePointer ;

	char dataToBeRead[50];

	filePointer = fopen("sample.c", "r") ;

	if ( filePointer == NULL )
	{
		printf( "sample.c file failed to open." ) ;
	}
	else
	{

		printf("The file is now opened.\n") ;

		while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
		{


			printf( "%s" , dataToBeRead ) ;
		}

		fclose(filePointer) ;

		printf("Data successfully read from file sample.c\n");
		printf("The file is now closed.") ;
	}

	return 0;
}
