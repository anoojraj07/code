#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int key,value,ch;
struct node
{
    int data;
    struct node *next;

}*new,*head,*tail,*head1,*tail1,*prev,*temp,*m;
void createnode()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter a node\n");
    scanf("%d",&value);
    new->data=value;
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        tail=new;
    }
    else
    {
        tail->next=new;
        tail=new;
    }
}
void display()
{
        printf("the linked list created is:\n");
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
}
void reverse()
{
        if(head==NULL)
        {
            printf("THE LIST IS EMPTY!\n");
        }
        else if(head->next==NULL)
        {
            printf("NO MEANING OF REVERSING AS THERE IS ONLY ONE NODE\n");
        }
        else
        {
            printf("THE REVERSED LINKED LIST IS:\n");
            temp=head;
            new=(struct node*)malloc(sizeof(struct node));
            new->data=head->data;
            new->next=NULL;
            tail1=new;
            head1=new;
            while(temp->next!=NULL)
            {
                temp=temp->next;
                new=(struct node*)malloc(sizeof(struct node));
                new->data=temp->data;
                new->next=head1;
                head1=new;
            }
            temp=head1;
            while(temp!=NULL)
            {
                printf("%d\t",temp->data);
                temp=temp->next;
            }
            printf("\n");
        }
}
void main()
{
    int ch;
    for(;;)
    {
        printf("enter 1->TO INSERT AT THE END\n 2->TO REVERSE THE SLL\n 3->DISPLAY\n 4->EXIT\n");
        printf("ENTER YOUR CHOICE:\n");
        scanf("%d",&ch);
             switch(ch)
        {
            case 1:createnode();
                    break;
            case 2:reverse();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
            deafult:printf("invalid choice\n");
        }
    }
}
