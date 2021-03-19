/*Дефиниране на структура, достъп до членове*/
#include <stdio.h>
#include <string.h>
struct tagPaper {
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};
int main( ) {
    struct tagPaper stPaper;

    stPaper.m_nBookId = 123456;
    strcpy( stPaper.m_szTitle, "Paper title");
    strcpy( stPaper.m_szAuthor, "Autor");
    strcpy( stPaper.m_szSubject, "paper subject");

    printf( "Paper id : %d\n", stPaper.m_nBookId);
    printf( "Paper title : %s\n", stPaper.m_szTitle);
    printf( "Paper author : %s\n", stPaper.m_szAuthor);
    printf( "Paper subject : %s\n", stPaper.m_szSubject);

    struct tagPaper stPaper2;

    stPaper2.m_nBookId = 343456;
    strcpy( stPaper2.m_szTitle, "Paper title2");
    strcpy( stPaper2.m_szAuthor, "G.Martin");
    strcpy( stPaper2.m_szSubject, "Triller");

    printf( "Paper id : %d\n", stPaper2.m_nBookId);
    printf( "Paper title : %s\n", stPaper2.m_szTitle);
    printf( "Paper author : %s\n", stPaper2.m_szAuthor);
    printf( "Paper subject : %s\n", stPaper2.m_szSubject);
    
    struct tagPaper stPaper3 = {52,"The Call of the Wild","Jack London","Adventure"};

    printf( "Paper id : %d\n", stPaper3.m_nBookId);
    printf( "Paper title : %s\n", stPaper3.m_szTitle);
    printf( "Paper author : %s\n", stPaper3.m_szAuthor);
    printf( "Paper subject : %s\n", stPaper3.m_szSubject);
return 0;
}