#include <stdio.h>
int queue[100],num,x;
int first = -1;
int last = -1;
int choice = 0;
void insFirst(int value)
{
  if ((first == 0 && last == 100 - 1) || first == last + 1) 
  {
    printf("Queue is full\n");
  } 
  else if (first == -1 && last == -1) 
  {
    first = last = 0;
    queue[first] = value;
  } 
  else if (first == 0) 
  {
    first = 100 - 1;
    queue[first] = value;
  } 
  else 
  {
    first--;
    queue[first] = value;
  }
}
void insLast(int value)
{
  if ((first == 0 && last == 100 - 1) || first == last + 1) 
  {
    printf("Queue is full\n");
  } 
  else if (first == -1 && last == -1) 
  {
    first = last = 0;
    queue[last] = value;
  } 
  else if (last == 100 - 1) 
  {
  last = 0;
  queue[last] = value;
  }
  else 
  {
    last++;
    queue[last] = value;
  }
}
int delFirst()  
{
  int value;
  if (first == -1 && last == -1) 
  {
    printf("Queue is empty\n");
    return -1;
  } 
  else if (first == last) 
  {
    value = queue[first];
    first = last = -1;
  }
  else if (first == 100 - 1) 
  {
    value = queue[first];
    first = 0;
  }
  else
  {
    value = queue[first];
    first++;
  }
  return value;
}
int delLast() 
{
  int value;
  if (first == -1 && last == -1) 
  {
    printf("Queue is empty\n");
    return -1;
  } 
  else if (first == last) 
  {    
    value = queue[last];
    first = last = -1;
  }
  else if (last == 0) 
  {
    value = queue[last];
    last = 100 - 1;
  }
  else  
  {
    value = queue[last];
    last--;
  }
  return value;
}
void location()
{
  printf("Location Of First Pointer Is: %d\n",first);
  printf("Location Of Last Pointer Is: %d\n",last);
}
void display() 
{
  if (first == -1 && last == -1) 
  {  
    printf("Queue is empty\n");
    return;
  }
  printf("Queue elements: ");
  if (first <= last) 
  {
    for (int i = first; i <= last; i++) 
    {
      printf("%d ", queue[i]);
    }
  } 
  else 
  {
    for (int i = first; i < 100; i++) 
    {
      printf("%d ", queue[i]);
    }
    for (int i = 0; i <= last; i++) 
    {
      printf("%d ", queue[i]);
    }
  }
  printf("\n");
}
int main()
{
  int choice, item;
  do
  {
    printf("Enter The Operation To Perform:\n");
    printf("1. Enqueue At First\n2. Enqueue At Last\n3. Dequeue From First\n4. Dequeue From Last\n5. Display the Quene\n6. Exit\n");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1:
        printf("Enter The Element To Enquene At First: ");
        scanf("%d", &item);
        insFirst(item);
        break;
      case 2:  
        printf("Enter The Element To Enqueue At Last: ");
        scanf("%d", &item);
        insLast(item);
        break;
      case 3:
        delFirst();
        break;
      case 4:
        delLast();
        break;
      case 5:
        display();
        break;
      case 6:
        printf("Exiting...\n");
        break;
      default:
        printf("Invalid Choice\n");
    }
  }
  while(choice != 6);
  return 0;
}

