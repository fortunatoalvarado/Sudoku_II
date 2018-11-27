//
// Created by FortunatoAlvarado on 09/10/2018.
//

#ifndef SODUKO_PROYECT_SODUKO_H
#define SODUKO_PROYECT_SODUKO_H

#endif //SODUKO_PROYECT_SODUKO_H
void generate()
{
    int c,i,m,n,count=1,fixed,error;
    char choice;
    randomize();
    generate:
    for(m=0;m<9;m++)
        for(n=0;n<9;n++)
            a[m][n]=0;
    for(i=0;i<60;i++)
    {
        r[i][0]=20; r[i][1]=20;
    }
    clrscr();
    printf("\n\n\n\n\t\tEnter your choice of difficulty");
    printf("\n\n\n\t\t1.VERY EASY\n\n\t\t2.EASY\n\n\t\t3.MEDIUM\n\n\t\t4.HARD\n\n\n\t\tENTER: ");
    scanf("%c",&choice);
    switch(choice)
    {
        case '1': mode=34+random(4);
            break;
        case '2': mode=29+random(4);
            break;
        case '3': mode=27+random(2);
            break;
        case '4': mode=25+random(2);
            break;
        default : getchar();
            goto generate;
    }
    a[0][0]=1+random(8); r[0][0]=0; r[0][1]=0;
    for(count=1;count<10;count++)
    {
        choose:
        m=random(9); n=random(9);
        fixed=isfixed(icount,m,n);
        if(fixed==1)
            goto choose;
        r[count][0]=m; r[count][1]=n;
        allot:
        a[m][n]=1+random(9);
        if(a[m][n]==0)
            goto allot;
        c=check(m,n);
        if(c==0)
            goto allot;
    }
    icount=count;
    error=solve();
    for(m=0;m<9;m++)
        for(n=0;n<9;n++)
            b[m][n]=a[m][n];
    row=0; col=0;
    for(i=0;i<60;i++)
    {
        r[i][0]=20; r[i][1]=20;
    }
    if(error==0)
        goto generate;
    for(count=0;count<mode/2;count++)
    {
        choose2:
        m=random(9); n=random(5);
        fixed=isfixed(count,m,n);
        if(fixed==1)
            goto choose2;
        r[count][0]=m; r[count][1]=n;
        r[count+mode/2][0]=8-m;
        r[count+mode/2][1]=8-n;
    }
    for(m=0;m<9;m++)
        for(n=0;n<9;n++)
        {
            fixed=isfixed(mode,m,n);
            if(fixed!=1)
                a[m][n]=0;
        }
    icount=mode;
    clrscr();
    display();
    getchar();
    printf("\n\n\nEnter 'y' to solve by yourself\nEnter 's' for solution\nEnter 'm' to generate more sudoku puzzles");
    printf("\nAnd any other key to exit: ");
    scanf("%c", &solh);
    if(solh=='y' || solh=='Y' || solh=='s' || solh=='S')
        return;
    getchar();
    if(solh=='m' || solh=='M')
        goto generate;
    exit(0);
}
