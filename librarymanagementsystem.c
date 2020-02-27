#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int displayMainMenu(void);
void addBook(void);
void deleteBook(void);
void searchBook(void);
void borrowBook(void);
void returnBook(void);
void searchBorrowedBook(void);
void addMember(void);
void searchMember(void);

FILE *fp, *ft, *fs;

struct Book
{
    int id;
    char name[20];
    char author[20];
    float price;
    char studentName[20];
};

struct Member
{
    int id;
    char name[20];
};

struct Book book;
struct Member member;

int main()
{
    int menu = 0;
    do
    {
        menu = displayMainMenu();
        switch (menu)
        {
        case 1:
            addBook();
            break;
        case 2:
            deleteBook();
            break;
        case 3:
            searchBook();
            break;
        case 4:
            borrowBook();
            break;
        case 5:
            searchBorrowedBook();
            break;
        case 6:
            returnBook();
            break;
        case 7:
            addMember();
            break;
        case 8:
            searchMember();
            break;
        case 9:
            continue;
        }
    }
    while (menu != 9);

    return 0;
}

int displayMainMenu()
{
    int menuInput = 0;
    printf("Choose an option:\n\n");
    printf("1. Add Book\n");
    printf("2. Delete Book\n");
    printf("3. Search Book\n");
    printf("4. Borrow Book\n");
    printf("5. Search Borrowed Book\n");
    printf("6. Return Book\n");
    printf("7. Add Member\n");
    printf("8. Search Member\n");
    printf("9. Exit\n\n");
    scanf("%d", &menuInput);

    if (menuInput < 0 || menuInput > 9)
    {
        printf("Invalid input!!! Enter again:");
        menuInput = displayMainMenu();
    }

    return menuInput;
}

void addBook()
{
    printf("Enter book ID:");
    scanf("%d", &book.id);
    printf("Enter book name:");
    scanf("%s", &book.name);
    printf("Enter book author:");
    scanf("%s", &book.author);
    printf("Enter book price:");
    scanf("%f", &book.price);
    fp = fopen("lmsbook.dat", "ab+");
    fseek(fp, 0, SEEK_END);
    fwrite(&book, sizeof(book), 1, fp);
    fclose(fp);
    system("cls");
    printf("Book saved successfully!!!");
}

void deleteBook()
{
    int d;
    char findBook;
    printf("Enter the book ID to delete:");
    scanf("%d",&d);
    fp=fopen("lmsbook.dat","rb+");
    rewind(fp);
    while(fread(&book, sizeof(book), 1, fp) == 1)
    {
        if(book.id==d)
        {
            printf("The book record is available\n");
            printf("Book name is %s\n",book.name);
            findBook='t';
        }
    }
    if(findBook!='t')
    {
        printf("Book not found\n");
    }
    if(findBook=='t')
    {
        printf("Do you want to delete it?(Y/N):\n");
        if(getch()=='y')
        {
            ft=fopen("test.dat","wb+");
            rewind(fp);
            while(fread(&book,sizeof(book),1,fp)==1)
            {
                if(book.id!=d)
                {
                    fseek(ft,0,SEEK_CUR);
                    fwrite(&book,sizeof(book),1,ft); //write all in temporary file except that we want to delete
                }
            }
            fclose(ft);
            fclose(fp);
            remove("lmsbook.dat");
            rename("test.dat","lmsbook.dat"); //copy all item from temporary file to fp except that we want to delete
            fp=fopen("lmsbook.dat","rb+");
            printf("The record is sucessfully deleted\n");
        }
        fflush(stdin);
    }
}

void searchBook()
{
    int d;
    char findBook;
    printf("Enter book ID to search:");
    scanf("%d",&d);
    fp = fopen("lmsbook.dat", "rb+");
    rewind(fp);
    while(fread(&book,sizeof(book),1,fp)==1)
    {
        if(book.id==d)
        {
            printf("The book record is available\n");
            printf("Book ID is %d\n",book.id);
            printf("Book name is %s\n",book.name);
            printf("Book author is %s\n",book.author);
            printf("Book price is %f\n",book.price);
            findBook='t';
        }
    }
    if(findBook!='t')
    {
        printf("Book not found\n");
    }
}

int checkBookId(int t)  //check whether the book is exist in library or not
{
    rewind(fp);
    while(fread(&book,sizeof(book),1,fp)==1)
        if(book.id==t)
            return 1;  //returns 1 if book exits
    return 0; //return 0 if it not
}

int checkMemberId(int t)
{
    FILE *mem = fopen("lmsmember.dat", "rb");
    while(fread(&member,sizeof(member),1,mem)==1)
        if(member.id==t)
            return 1;
    return 0;
}

void borrowBook()
{
    int t;
    int memberId;
    printf("Enter the Book Id:");
    scanf("%d",&t);
    fp=fopen("lmsbook.dat","rb");
    fs=fopen("lmsissue.dat","ab+");
    if (checkBookId(t) == 1)
    {
        printf("The book record is available");
        printf("Book name is %s\n",book.name);
        printf("Verify by entering member ID:");
        scanf("%d", &memberId);
        if (checkMemberId(memberId) == 1)
        {
            printf("Enter student name:");
            scanf("%s",book.studentName);
            fseek(fs,sizeof(book),SEEK_END);
            fwrite(&book,sizeof(book),1,fs);
            fclose(fs);
            printf("Successfully issued\n");
        }
        else
        {
            printf("You are not authorized");
        }

    }
    else
    {
        printf("No record found\n");
    }
    fflush(stdin);
}

void searchBorrowedBook()
{
    int d;
    char findBook;
    printf("Enter book ID to search:");
    scanf("%d",&d);
    fp = fopen("lmsissue.dat", "rb+");
    rewind(fp);
    while(fread(&book,sizeof(book),1,fp)==1)
    {
        if(book.id==d)
        {
            printf("The book record is available\n");
            printf("Book ID is %d\n",book.id);
            printf("Book name is %s\n",book.name);
            printf("Book author is %s\n",book.author);
            printf("Book price is %f\n",book.price);
            printf("Book borrowed by %s\n",book.studentName);
            findBook='t';
        }
    }
    if(findBook!='t')
    {
        printf("Book not found\n");
    }
}

void returnBook()
{
    int t;
    FILE *fg;
    printf("Enter the Book Id:");
    scanf("%d",&t);
    fs=fopen("lmsissue.dat","rb+");
    while(fread(&book,sizeof(book),1,fs)==1)
    {
        if(book.id==t)
        {
            printf("Book name is %s\n",book.name);
            printf("Book borrowed by %s\n",book.studentName);
            printf("Do You Want to Remove it?(Y/N)");
            if(getch()=='y')
            {
                fg=fopen("lmsbook.dat","wb+");
                rewind(fs);
                while(fread(&book,sizeof(book),1,fs)==1)
                {
                    if(book.id!=t)
                    {
                        fseek(fs,0,SEEK_CUR);
                        fwrite(&book,sizeof(book),1,fg);
                    }
                }
                fclose(fs);
                fclose(fg);
                remove("lmsissue.dat");
                rename("lmsbook.dat","lmsissue.dat");
                printf("The issued book is removed from list");
            }
        }
    }
}

void addMember()
{

    printf("Enter member ID:");
    scanf("%d", &member.id);
    printf("Enter member name:");
    scanf("%s", &member.name);
    FILE *mem = fopen("lmsmember.dat", "ab+");
    fseek(mem, 0, SEEK_END);
    fwrite(&member, sizeof(member), 1, mem);
    fclose(mem);
    system("cls");
    printf("Member added successfully!!!");
}

void searchMember()
{
    int d;
    char findMember;
    printf("Enter member ID to search:");
    scanf("%d",&d);
    fp = fopen("lmsmember.dat", "rb+");
    rewind(fp);
    while(fread(&member,sizeof(member),1,fp)==1)
    {
        if(member.id==d)
        {
            printf("The member record is available\n");
            printf("Member ID is %d\n",member.id);
            printf("Member name is %s\n",member.name);
            findMember='t';
        }
    }
    if(findMember!='t')
    {
        printf("Member not found\n");
    }
}
