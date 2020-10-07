void main()
{
char a[20];
int price,Gst=0,total=0,n;
printf("\n Billing software for Coffee Day -CD \n");
printf("\n -------------------------------\n");
printf("\nEnter the Name of the Item :");
scanf("%s",a);
printf("\nEnter the No of Items :");
scanf("%d",&n);
printf("\nEnter the Price of the Item:");
scanf("%d",&price);
Gst=((price/100)*18);
total=(price+Gst)*n;
printf("\n\n Coffe Day  \n\n");
printf("\n -----------------\n");
printf("\n Item   Price   Gst   Total \n");
printf("\n %s      %d      %d      %d\n",a,price,Gst,total);
printf("\n ----------------------------");
printf("\n Thank You ! do Visit Again\n");
getch();
}
