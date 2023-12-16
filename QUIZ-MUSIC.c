#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

void CORRECT(char a, char b, int *x, bool *r){
    if (a == b){
       (*x)++;
       (*r)=true;
    } else {
        (*r)=false;
        return;
    }

}

int main(){
    char answ, quest;
    int choice,pts=0,i;
    bool corr=false;
    printf("WELCOME THE ULTIMATE QUIZ ABOUT OLD SCHOOL MUSIC !!!\n\n");
    while (choice != 0 && choice != 1){
        printf("   >>Press 1 to start a new game...\n   >>Press 0 to quit the game...\n\n   So ? ");
        scanf("%d",&choice);
        getchar();
    }
    switch (choice){
    case 1:
        printf("\nLETS GET STARTEEEED !!!\n(it's gonna be hard ngl...)\n");
        Sleep(1500);
        printf("3...");
        Sleep(1000);
        printf("2...");
        Sleep(1000);
        printf("1...\n");
        //QUESTION1
        Sleep(1000);
        printf("\n\n-------------------------------------\n\n1.Which iconic rock band released the album 'Sticky Fingers' in 1971?\n  a) Led Zeppelin\n  b) The Rolling Stones\n  c) The Who\n  d) Pink Floyd\n\n  answer : ");
        scanf("%c",&answ);
        quest ='b';
        CORRECT(quest,answ,&pts,&corr);
        if (corr == true){
            printf("\n\n-------------------------------------\n\nCORRECT !!\n'Sticky Fingers' is not only known for its great music but also for its iconic cover designed by Andy Warhol.");
        } else {
            printf("\n\n-------------------------------------\n\nWROOONG !!\n The correct answer is b) The Rolling Stones. 'Sticky Fingers' is not only known for its great music but also for its iconic cover designed by Andy Warhol.");
        }
        Sleep(6000);
        getchar();
        //QUESTION2
        printf("\n\n-------------------------------------\n\n2.What disco anthem by the Bee Gees was a major hit and featured in the movie 'Saturday Night Fever'?\n  a) How Deep Is Your Love\n  b) Night Fever\n  c) Stayin' Alive\n  d) Tragedy\n\n  answer : ");
        quest ='c';
        scanf("%c",&answ);
        CORRECT(quest,answ,&pts,&corr);
        if (corr == true){
            printf("\n\n-------------------------------------\n\nCORRECT !!\nThe Bee Gees' soundtrack for 'Saturday Night Fever' became a cultural phenomenon. 'Stayin' Alive' is not only known for its catchy beat but also as the perfect song to strut\ndown the street.");
        } else{
            printf("\n\n-------------------------------------\n\nWROOONG !!\nThe correct answer is c) Stayin' Alive. The Bee Gees' soundtrack for 'Saturday Night Fever' became a cultural phenomenon. 'Stayin' Alive' is not only known for its catchy beat\nbut also as the perfect song to strut down the street.");
        }
        Sleep(6000);
        getchar();
        //QUESTION3
        printf("\n\n-------------------------------------\n\n3.Who was known as the 'Queen of Disco' for her hits like 'I Feel Love' and 'Last Dance'?\n  a) Gloria Gaynor\n  b) Donna Summer\n  c) Diana Ross\n  d) Cher\n\n  asnwer : ");
        quest ='b';
        scanf("%c",&answ);
        CORRECT(quest,answ,&pts,&corr);
        if (corr == true){
            printf("\n\n-------------------------------------\n\nCORRECT !!\nDonna Summer earned the title 'Queen of Disco' for her contributions to the genre.");
        } else{
            printf("\n\n-------------------------------------\n\nWROOONG !!\nThe correct answer is b) Donna Summer. Donna Summer earned the title 'Queen of Disco' for her contributions to the genre.");
        }
        Sleep(6000);
        getchar();
        //QUESTION4
        printf("\n\n-------------------------------------\n\n4.Name the British band that released the album 'The Joshua Tree' in 1987, featuring hits like 'With or Without You'.\n  a) U2\n  b) The Police\n  c) Duran Duran\n  d) Depeche Mode\n\n  answer : ");
        quest ='a';
        scanf("%c",&answ);
        CORRECT(quest,answ,&pts,&corr);
        if (corr == true){
            printf("\n\n-------------------------------------\n\nCORRECT !!\n'The Joshua Tree' elevated U2 to international superstardom. The album's atmospheric sound and powerful lyrics, especially in 'With or Without You'.");
        } else{
            printf("\n\n-------------------------------------\n\nWROOONG !!\nThe correct answer is a) U2. 'The Joshua Tree' elevated U2 to international superstardom. The album's atmospheric sound and powerful lyrics, especially in 'With or Without You'.");
        }
        Sleep(6000);
        getchar();
        //QUESTION5
        printf("\n\n-------------------------------------\n\n5.What Michael Jackson album, released in 1982, is the best-selling album of all time?\n  a) Bad\n  b) Thriller\n  c) Off the Wall\n  d) Dangerous\n\n  answer : ");
        quest='b';
        scanf("%c",&answ);
        CORRECT(quest,answ,&pts,&corr);
        if (corr == true){
            printf("\n\n-------------------------------------\n\nCORRECT !!\nMichael Jackson's 'Thriller' is not only the best-selling album but also known for its groundbreaking music videos.");
        } else{
            printf("\n\n-------------------------------------\n\nWROOONG !!\nThe correct answer is b) Thriller. Michael Jackson's 'Thriller' is not only the best-selling album but also known for its groundbreaking music videos.");
        }
        Sleep(6000);
        getchar();
        //QUESTION6
        printf("\n\n-------------------------------------\n\n6.'Sweet Child o' Mine' is a song by which hard rock band from the 80s?\n  a) Guns N' Roses\n  b) AC/DC\n  c) Def Leppard\n  d) Bon Jovi\n\n  answer : ");
        quest ='a';
        scanf("%c",&answ);
        CORRECT(quest,answ,&pts,&corr);
        if (corr == true){
            printf("\n\n-------------------------------------\n\nCORRECT !!\n'Sweet Child o' Mine' is one of Guns N' Roses' signature songs. Guitarist Slash's iconic riff in the song is often recognized as one of the greatest in rock history.");
        } else{
            printf("\n\n-------------------------------------\n\nWROOONG !!\nThe correct answer is a) Guns N' Roses. 'Sweet Child o' Mine' is one of Guns N' Roses' signature songs. Guitarist Slash's iconic riff in the song is often recognized as one of\nthe greatest in rock history.");
        }
        Sleep(6000);
        getchar();
        //QUESTION7
        printf("\n\n-------------------------------------\n\n7.Which grunge band from Seattle released the iconic album 'Nevermind' in 1991?\n  a) Pearl Jam\n  b) Nirvana\n  c) Soundgarden\n  d) Alice in Chains\n\n  answer : ");
        quest ='b';
        scanf("%c",&answ);
        CORRECT(quest,answ,&pts,&corr);
        if (corr == true){
            printf("\n\n-------------------------------------\n\nCORRECT !!\n'Nevermind' is considered a defining album of the grunge movement. The album's lead single, 'Smells Like Teen Spirit', became an anthem for a generation.");
        } else{
            printf("\n\n-------------------------------------\n\nWROOONG !! The correct answer is b) Nirvana. 'Nevermind' is considered a defining album of the grunge movement. The album's lead single, 'Smells Like Teen Spirit', became an anthem for\na generation.\n");
        }
        Sleep(6000);
        getchar();
        //QUESTION8
        printf("\n\n-------------------------------------\n\n8.What is the title of ABBA's hit song that serves as the title track for both their fourth studio album and the musical based on their songs?\n  a) 'Dancing Queen'\n  b) 'Waterloo'\n  c) 'Mamma Mia'\n  d) 'Take a Chance on Me'\n\n  answer : ");
        quest ='c';
        scanf("%c",&answ);
        CORRECT(quest,answ,&pts,&corr);
        if (corr == true){
            printf("\n\n-------------------------------------\n\nCORRECT !!\nThis catchy and upbeat song not only became one of ABBA's signature tunes but also inspired the creation of the musical 'Mamma Mia'!");
        } else{
            printf("\n\n-------------------------------------\n\nWROOONG !!\nThe correct answer is c) 'Mamma Mia'. This catchy and upbeat song not only became one of ABBA's signature tunes but also inspired the creation of the musical 'Mamma Mia'!");
        }
        Sleep(6000);
        getchar();
        //QUESTION9
        printf("\n\n-------------------------------------\n\n9.What is Frank Sinatra often referred to as?\n  a) The King of Pop\n  b) The Chairman of the Board\n  c) The Prince of Jazz\n  d) The Duke of Soul\n\n answer : ");
        quest ='b';
        scanf("%c",&answ);
        CORRECT(quest,answ,&pts,&corr);
        if (corr == true){
            printf("\n\n-------------------------------------\n\nCORRECT !!\nFrank Sinatra earned the nickname 'The Chairman of the Board' for his leadership and influence in the music industry.");
        } else{
            printf("\n\n-------------------------------------\n\nWROOONG !!\nThe correct answer is b) The Chairman of the Board. Frank Sinatra earned the nickname 'The Chairman of the Board' for his leadership and influence in the music industry.");
        }
        Sleep(6000);
        getchar();
        //QUESTION10
        printf("\n\n-------------------------------------\n\n10.Boney M's 1978 Christmas hit 'Mary's Boy Child - Oh My Lord' is a cover of a song originally recorded by which artist?\n  a) Elvis Presley\n  b) Nat King Cole\n  c) Bing Crosby\n  d) Harry Belafonte\n\n answer : ");
        quest ='d';
        scanf("%c",&answ);
        CORRECT(quest,answ,&pts,&corr);
        if (corr == true){
            printf("\n\n-------------------------------------\n\nCORRECT !!\nThe song was originally recorded by Harry Belafonte in 1956 and later covered by various artists.");
        } else{
            printf("\n\n-------------------------------------\n\nWROOONG !!\nThe correct answer is b) Harry Belafonte. The song was originally recorded by Harry Belafonte in 1956 and later covered by various artists.");
        }
        Sleep(6000);
        printf("\nCalculating Score");
        for (i=0;i<5;i+=1){
            Sleep(1000);
            printf(".");
        }
        if (pts <= 5){
            printf("\n\nYou scored a impressively bad %d/10 socre...Not your generation i guess...",pts);
        } else if(pts<=9){
            printf("\n\nYou scored a good %d/10 score...You're quite cultured",pts);
        } else {
            printf("\n\nYou scored a IMPOSSIBLE of %d/10 socre...You have no shame using my cousin ChatGPT at your age to cheat on a quiz...",pts);
        }
        Sleep(3000);
        printf("\n\n-------------------------------------\n\n   ANYWAYS THX FOR TRYING MY QUIZ <333");
        break;
    
    case 0:
        printf("I see...get out of here then.");
        break;
    }
    return 0;
}