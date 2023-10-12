#include<stdio.h>
#include<stdlib.h>
typedef struct SNODEtype
{
    int info;
    struct SNODEtype *next;
}SN;
SN *INSERTatbeg(SN*HEAD,SN*TEMP);
SN* INSERTatlast(SN*HEAD,SN*TEMP);
SN* DELETEbeg(SN*HEAD,SN*TEMP);
SN* DELETElast(SN*HEAD,SN*TEMP);
SN* INSERTatpos(SN*HEAD,SN*TEMP);
SN* INSERTafterpos(SN*HEAD,SN*TEMP);
SN* INSERTbeforepos(SN*HEAD,SN*TEMP); 
void display(SN*);

int main()
{
    SN *HEAD=NULL;
    SN *TEMP;
    int ch;
    
    do
    {
        printf("press 1 for insertion at beginning\n");
        printf("press 2 for insertion at last\n");
        printf("press 3 for deletion from beginning\n");
        printf("press 4 for deletion from last\n");
        printf("press 5 for DISPLAY\n");
        printf("press 6 for insertion at position\n");
        printf("press 7 for inertion after a position\n");
        printf("press 8 for insertion before a position\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        TEMP=(SN*)malloc(sizeof(SN));
        switch(ch)
        {
            case 1 : 
               HEAD= INSERTatbeg(HEAD,TEMP);
                break; 
            case 2:
                 HEAD= INSERTatlast(HEAD,TEMP);
                 break;
            case 3:
                 HEAD= DELETEbeg(HEAD,TEMP);
                 break;
            case 4:
                 HEAD = DELETElast(HEAD,TEMP);
                 break;
            case 5: display(HEAD);
                    break;
            case 6:
                HEAD = INSERTatpos(HEAD,TEMP);
                break;
            case 7: 
                HEAD=INSERTafterpos(HEAD,TEMP);
                break;

            case 9:
                HEAD=INSERTbeforepos(HEAD,TEMP);    
                break;
            default:exit(0);
        }

    }while(1);
}

void display(SN *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->info);
        head=head->next;
    }


}


SN *INSERTatbeg(SN*HEAD,SN*TEMP)
{
    int val;
    if(TEMP==NULL)
    {
        printf("MEMORY NOT AVAILABLE\n");
    }
    else
    {
        printf("enter value\n");
        scanf("%d",&val);
        TEMP->info=val;
        TEMP->next=HEAD;
        HEAD=TEMP;
        printf("inserted info :\t%d\n",TEMP->info);
    }
    return HEAD;

}
SN *INSERTatlast(SN*HEAD,SN*TEMP)
{
    
    if(TEMP==NULL)
    {
         printf("MEMORY NOT AVAILABLE\n");
    }
    else
    {
        int val;
        SN *p1;
        printf("enter value\n");
        scanf("%d",&val);
        p1= HEAD;
        while(p1->next!=NULL)
        {
            p1=p1->next;
        }
          TEMP->info=val;
          TEMP->next=NULL;
          p1->next=TEMP;
          printf("new node's info :\t%d\n",TEMP->info);
    }
     return HEAD;
}
SN* DELETEbeg(SN*HEAD,SN*TEMP)
{
    if(HEAD==NULL)
    {
        printf("LINKED LIST IS EMPTY\n");
    }
    else
    {
        SN *TEMP=HEAD;
        HEAD = TEMP->next;
        printf("deleted info:\t%d\n",TEMP->info);
        free(TEMP);
    }
         return HEAD;
}
SN* DELETElast(SN*HEAD,SN*TEMP)
{
    if(HEAD==NULL)
    {
        printf("LINKED LIST IS EMPTY");
    }
    else
    {
        SN*p1=HEAD;
        SN*p2;
       
        while(p1->next!=NULL)
        {
            p2=p1;
            p1=p1->next;
        }
         printf("deleted info:\t%d\n",p2->info);
        p2->next=NULL;
        free(p1);
    }   return HEAD;
        
}
SN* INSERTatpos(SN*HEAD,SN*TEMP)
{
    SN* p1=HEAD;
    int c=1;
    int pos;
    if(TEMP==NULL)
    {
        printf("MEMORY NOT AVAILABLE\n");
    }
    else
    {
        printf("enter position\n");  //position where a node has to be inserted
        scanf("%d",&pos); 
        while(c!=pos-1 && p1!=NULL)    //c is a counter counting linked ists
        {
            p1=p1->next;
            c++;
        }
        printf("INSERT VALUE FOR NEW NODE\n");
        scanf("%d",&TEMP->info);
        TEMP->next=p1->next;
        p1->next=TEMP;
        printf("inserted info%d\n at node%d",TEMP->info,pos);
    }
    return HEAD;

}
SN* INSERTafterpos(SN*HEAD,SN*TEMP)
{
    SN* p1=HEAD;
    int pos;
    if(TEMP==NULL)
    {
        printf("MEMORY NOT AVAILABLE\n");
    }
    else
    {
        printf("enter element\n");  //position where a node has to be inserted
        scanf("%d",&pos);
        while(p1->next!=NULL && p1->info!=pos)    //c is a counter counting linked ists
            p1=p1->next;
        printf("INSERT VALUE FOR NEW NODE\n");
        scanf("%d",&TEMP->info);
        TEMP->next=p1->next;
        p1->next=TEMP;
    }
      return HEAD;
}

SN* INSERTbeforepos(SN*HEAD,SN*TEMP)
{
    int pos;
    SN* p1=HEAD;
    SN *p2=HEAD;
    if(TEMP==NULL)
    {
        printf("MEMORY NOT AVAILABLE\n");
    }
    else
    {
        printf("enter position\n");  //position where a node has to be inserted
        scanf("%d",&pos);
        while(p1->next!=NULL && p1->info!=pos)    //c is a counter counting linked ists
        {
            p2=p1;
            p1=p1->next;
        }
        printf("INSERT VALUE FOR NEW NODE\n");
        scanf("%d",&TEMP->info);
        TEMP->next=p2->next;
        p2->next=TEMP;
    }
    return HEAD;

}
