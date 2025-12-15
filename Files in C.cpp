//FILES IN C
/* 		File is a special datatype it is available in stdio.h header file
		File has two types: 
			1. Text file :
				contains plain text(digits and alphabets)
			2. binary file
				contains binary digits (o's and 1's)
		fILE POINTER SYNTAX : FILE *fp;
		fopen();
				fopen is a function used to open the files and is availanle in the stdio.h header file
		 `		syntax : fp = fopen("file name.txt","mode");
		 Modes: 
			1. Read only mode (r):
				syntax : fp=fopen("file name","r");
				case 1: if file is existed you can read the content of the file 
				case 2: if the file is not existed then it returns NULL
			2. Write only mode (w):
				syntax : fp=fopen("file name","w");
				case 1: if file is existed you can write the data to the file but it re writes the data
				case 2: if the file is not existed then it creates a new file with the same name
			3. appen mode (a):
				syntax : fp=fopen("file name","a");
				case 1: if file is existed you can edit/append the data to the file but the data adds at the end of the previous data
				case 2: if the file is not existed then it creates a new file with the same name
			4. Read and write mode (r+):
				syntax : fp=fopen("file name","r+");
				case 1: if file is existed you can read from the file and write the content to the file, but the previous data is not deleted
				case 2: if the file is not existed then it returns NULL
			5. Write and read mode (w+):
				syntax : fp=fopen("file name","w+");
				case 1: if file is existed you can write the data to the file and read the data from the file, but it re writes/deletes the previous data
				case 2: if the file is not existed then it creates a new file with the same name
			6. Append and Read mode (a+):
				syntax : fp=fopen("file name","a+");
				case 1: if file is existed you can edit/append and read the data in the file but the data adds at the end of the previous data
				case 2: if the file is not existed then it creates a new file with the same name
		
		Functions to write anything in the file: 
				fprintf();
				fputs();
				fputc();
				putc();
				putw()
		Functions to read anything from the file:
				fscanf();
				fgets();
				fgets();
				getc();
				getw();
				*/
