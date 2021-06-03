
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    ".\\sign_up.pc"
};


static unsigned int sqlctx = 269131;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
            void  *sqhstv[1];
   unsigned int   sqhstl[1];
            int   sqhsts[1];
            void  *sqindv[1];
            int   sqinds[1];
   unsigned int   sqharm[1];
   unsigned int   *sqharc[1];
   unsigned short  sqadto[1];
   unsigned short  sqtdso[1];
} sqlstm = {13,1};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,1,0,0,
5,0,0,1,0,0,17,69,0,0,1,1,0,1,0,1,97,0,0,
24,0,0,1,0,0,45,71,0,0,0,0,0,1,0,
39,0,0,1,0,0,13,75,0,0,1,0,0,1,0,2,9,0,0,
58,0,0,1,0,0,15,85,0,0,0,0,0,1,0,
73,0,0,2,0,0,29,86,0,0,0,0,0,1,0,
88,0,0,1,0,0,17,202,0,0,1,1,0,1,0,1,97,0,0,
107,0,0,1,0,0,45,204,0,0,0,0,0,1,0,
122,0,0,1,0,0,13,208,0,0,1,0,0,1,0,2,9,0,0,
141,0,0,1,0,0,15,229,0,0,0,0,0,1,0,
156,0,0,3,0,0,29,230,0,0,0,0,0,1,0,
171,0,0,1,0,0,17,404,0,0,1,1,0,1,0,1,97,0,0,
190,0,0,1,0,0,45,406,0,0,0,0,0,1,0,
205,0,0,1,0,0,15,410,0,0,0,0,0,1,0,
220,0,0,4,0,0,29,411,0,0,0,0,0,1,0,
};


// 마지막고침 : 2020.11.17
// win32 Visual C 2010 이상컴파일시 추가
// 프로그램 가장 첫 줄에 추가할 것
#define _CRT_SECURE_NO_WARNINGS
//-----------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include "header.h"
/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>

// win32 Visual C 2010 이상컴파일시 추가
#define getch() _getch()

/*---------------  화면 커서 위치 제어 ----------------------*/
#include < windows.h >
/*-----------------------------------------------------------*/

#define getch() _getch()

#include < windows.h >

void sign_up(char concert_num[10]) {
   _putenv("NLS_LANG=American_America.KO16KSC5601");
   srand(time(NULL)); // customerno 값을 저장하기 위해 랜덤 값 발생하기
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

   char dynstmt[1000];
   /* varchar num[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } num;

   /* varchar id[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } id;

   /* varchar pwd[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pwd;

   /* varchar pwd_s[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pwd_s;

     /* varchar name[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } name;

   /* varchar add[500]; */ 
struct { unsigned short len; unsigned char arr[500]; } add;

   /* EXEC SQL END DECLARE SECTION; */ 


   system("cls");
   gotoxy(0,0);   
   print_screen("signup.txt");

   char num_temp[10];
   char name_temp[10];
   char id_temp[10];
   char pwd_temp[10];
   char pwd2_temp[10];
   char add_temp[50];
   char sp[5] = {'!','@','#','$','%'}; // 특수문자

   char ch = ' ';

   int i = 0;
   int j = 0;
   int num1 = 0;
   int num2 = 0;
   srand(time(NULL));
   char s1[40];       // 변환한 문자열을 저장할 배열
   
   num1 = rand() % ((99999 - 1) + 10000) + 10000;
   sprintf(s1, "%d", num1);    // %d를 지정하여 정수를 문자열로 저장
   
   sprintf(dynstmt,"SELECT customerno FROM userinfo where customerno LIKE '%%%s%%' ",s1);

   /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 1;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )5;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    /* EXEC SQL DECLARE c_cursor CURSOR FOR S ; */ 
 
   /* EXEC SQL OPEN c_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 1;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )24;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 
   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


   for(;;) {
      /* EXEC SQL FETCH c_cursor INTO :num; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 1;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )39;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqfoff = (           int )0;
      sqlstm.sqfmod = (unsigned int )2;
      sqlstm.sqhstv[0] = (         void  *)&num;
      sqlstm.sqhstl[0] = (unsigned int  )102;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
}


      num.arr[num.len]='\0';

      if(strcmp(s1, num.arr)==0) {
         printf("화면을 reroad 합니다.");
         getch();
         sign_up(concert_num);
      }
   }

   /* EXEC SQL CLOSE c_cursor; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 1;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )58;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL COMMIT ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 1;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )73;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}




   /* 사용자 입력 */
   gotoxy(29,7); // 이름 입력
      name_temp[10] = " ";
   i = 0;
      while(1){
         if(_kbhit()){
      if(i <10 && i >= 0 ){
         name_temp[i] = getch();
         if (name_temp[i] == 13) {
            break;
               }
         else if(name_temp[i]==8){
                if(i>0){
               printf("\b");
               printf(" ");
               printf("\b");
               i--;
            }
         }
         else{
            printf("%c",name_temp[i]);
            i++;
         }
      }
      else{
         char temp = getch();
         if(temp==8){
                if(i>0){
               printf("\b");
               printf(" ");
               printf("\b");
               i--;
            }
               }
         }
      }
   }
      name_temp[i] = '\0';

   int name_len = i;
   int check_name = 0;
         for(int o = 0; o < name_len; o++){
         if (!check_name){
          char check = name_temp[o];
            if(check >= 'a' && ch <='z' || ch >= 'A' && ch <= 'Z'){
               //printf("알파벳입니다.");
            }
            else if(check >='0' && check <= '9'){
               //printf("숫자입니다.");
               check_name = 1;
               break;

            }
            else if (check >= 0 && check <= 47 || check >=58 && check <=64 || check >=91 && check <=96 || check >=123 && check <=126){
               //printf("특수문자입니다.");
               check_name = 1;
               break;
            }
      }
   }

   if (check_name == 1){
      gotoxy(29,8);
      printf("다시 입력해주세요");
      getch();
      system("cls");
       sign_up(concert_num); // 재시작
   }



   gotoxy(31,10); // 아이디 입력
      id_temp[10] = "";
   i = 0;
      while(1){
         if(_kbhit()){
      if(i <10 && i >= 0 ){
         id_temp[i] = getch();
         if (id_temp[i] == 13) {
            break;
               }
         else if(id_temp[i]==8){
                if(i>0){
               printf("\b");
               printf(" ");
               printf("\b");
               i--;
            }
         }
         else{
            printf("%c",id_temp[i]);
            i++;
         }
      }
      else{
          if(getch()==8){
                       if(i>0){
                        printf("\b");
                        printf(" ");
                        printf("\b");
                        i--;
                  }
                     }

         }
      }
   }
      id_temp[i] = '\0';


   /* 실행시킬 SQL 문장*/
   sprintf(dynstmt,"SELECT customerid FROM userinfo where customerid LIKE '%%%s%%'", id_temp);

   /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 1;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )88;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DECLARE c_cursor2 CURSOR FOR S ; */ 
 
   /* EXEC SQL OPEN c_cursor2 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 1;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )107;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 
   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


   for (;;){
           /* EXEC SQL FETCH c_cursor2 INTO :id; */ 

{
           struct sqlexd sqlstm;
           sqlstm.sqlvsn = 13;
           sqlstm.arrsiz = 1;
           sqlstm.sqladtp = &sqladt;
           sqlstm.sqltdsp = &sqltds;
           sqlstm.iters = (unsigned int  )1;
           sqlstm.offset = (unsigned int  )122;
           sqlstm.selerr = (unsigned short)1;
           sqlstm.sqlpfmem = (unsigned int  )0;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)4352;
           sqlstm.occurs = (unsigned int  )0;
           sqlstm.sqfoff = (           int )0;
           sqlstm.sqfmod = (unsigned int )2;
           sqlstm.sqhstv[0] = (         void  *)&id;
           sqlstm.sqhstl[0] = (unsigned int  )102;
           sqlstm.sqhsts[0] = (         int  )0;
           sqlstm.sqindv[0] = (         void  *)0;
           sqlstm.sqinds[0] = (         int  )0;
           sqlstm.sqharm[0] = (unsigned int  )0;
           sqlstm.sqadto[0] = (unsigned short )0;
           sqlstm.sqtdso[0] = (unsigned short )0;
           sqlstm.sqphsv = sqlstm.sqhstv;
           sqlstm.sqphsl = sqlstm.sqhstl;
           sqlstm.sqphss = sqlstm.sqhsts;
           sqlstm.sqpind = sqlstm.sqindv;
           sqlstm.sqpins = sqlstm.sqinds;
           sqlstm.sqparm = sqlstm.sqharm;
           sqlstm.sqparc = sqlstm.sqharc;
           sqlstm.sqpadto = sqlstm.sqadto;
           sqlstm.sqptdso = sqlstm.sqtdso;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
           if (sqlca.sqlcode == 1403) break;
}


       id.arr[id.len] = '\0' ;
      while(1){
         if (strcmp(id_temp, id.arr) == 0){
            // 입력받은 아이디 값과 DB에 저장된 값이 일치하는지 확인
            gotoxy(45,10);
            printf("사용중인 아이디 입니다. 다시 입력하세요 :)");
            id_temp[10] = " ";
            gotoxy(31,10);
            printf("             ");
            gotoxy(31,10);
            gets(id_temp);
         }
         else {
            gotoxy(45,10);
            printf("                                            ");
            break;
         }
      }
   }

   /* EXEC SQL CLOSE c_cursor2; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 1;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )141;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL COMMIT ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 1;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )156;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      
   gotoxy(33,13); // 비밀번호 입력

   pwd_temp[10] = "";
   pwd2_temp[10] = "";   
   i = 0;
   j = 0;
      while(1){
         if(_kbhit()){
      if(i <10 && i >= 0 ){
         pwd_temp[i] = getch();
         if (pwd_temp[i] == 13) {
            break;
               }
         else if(pwd_temp[i]==8){
                if(i>0){
               printf("\b");
               printf(" ");
               printf("\b");
               i--;
            }
         }
         else{
            printf("*");
            i++;
         }
      }
      else{
         if(getch()==8){
                if(i>0){
               printf("\b");
               printf(" ");
               printf("\b");
               i--;
            }
               }
         }
      }
   }
   pwd_temp[i] = '\0';   
   gotoxy(38,16);
      while(1){
         if(_kbhit()){
      if(j <10 && j >= 0 ){
         pwd2_temp[j] = getch();
         if (pwd2_temp[j] == 13) {
            break;
               }
         else if(pwd2_temp[j]==8){
                if(j>0){
               printf("\b");
               printf(" ");
               printf("\b");
               j--;
            }
         }
         else{
            printf("*");
            j++;
         }
      }
      else{
         if(getch()==8){
                if(j>0){
               printf("\b");
               printf(" ");
               printf("\b");
               j--;
            }
               }
         }
      }
   }

   pwd2_temp[j] = '\0';

   while(1){
      if (strcmp(pwd_temp, pwd2_temp) != 0){
         // 입력받은 비밀번호 값과 비밀번호 확인 값이 일치하지 않는지 확인
         gotoxy(52,17);
         printf("비밀번호가 일치하지 않습니다. 다시 입력하세요 :)");
         gotoxy(33,13);
         printf("                       ");
         gotoxy(38,16);
         printf("                       ");
         gotoxy(33,13);

   pwd_temp[10] = "";
   pwd2_temp[10] = "";   
   i = 0;
   j = 0;
      while(1){
         if(_kbhit()){
      if(i <10 && i >= 0 ){
         pwd_temp[i] = getch();
         if (pwd_temp[i] == 13) {
            break;
               }
         else if(pwd_temp[i]==8){
                if(i>0){
               printf("\b");
               printf(" ");
               printf("\b");
               i--;
            }
         }
         else{
            printf("*");
            i++;
         }
      }
      else{
         if(getch()==8){
                if(i>0){
               printf("\b");
               printf(" ");
               printf("\b");
               i--;
            }
               }
         }
      }
   }
   pwd_temp[i] = '\0';   

   gotoxy(38,16);
      while(1){
         if(_kbhit()){
      if(j <10 && j >= 0 ){
         pwd2_temp[j] = getch();
         if (pwd2_temp[j] == 13) {
            break;
               }
         else if(pwd2_temp[j]==8){
                if(j>0){
               printf("\b");
               printf(" ");
               printf("\b");
               j--;
            }
         }
         else{
            printf("*");
            j++;
         }
      }
      else{
         if(getch()==8){
                if(j>0){
               printf("\b");
               printf(" ");
               printf("\b");
               j--;
            }
               }
         }
      }
   }

   pwd2_temp[j] = '\0';
      }
      else {
         gotoxy(52,16);
         printf("                                                      ");
         break;
      }
   }   

   gotoxy(29,19); // 주소 입력
   gets(add_temp);
   
   // 사용자 정보 삽입
   sprintf(dynstmt,"insert into userinfo values ('%s', '%s', '%s', '%s', '%s')", s1, id_temp, pwd_temp, name_temp, add_temp); 
   /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 1;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )171;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DECLARE c_cursor3 CURSOR FOR S ; */ 
 
   /* EXEC SQL OPEN c_cursor3 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 1;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )190;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 
   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

   gotoxy(18,21);
   printf("회원가입 되었습니다! 로그인 화면으로 이동합니다!");
   /* EXEC SQL CLOSE c_cursor3; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 1;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )205;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL COMMIT ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 1;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )220;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   getch();
   dologin(concert_num); // 로그인 화면으로 이동
               
   }
