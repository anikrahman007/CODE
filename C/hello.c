#include<stdio.h>
#include<cs50.h>

int main(void){

   string answer_1 = get_string("What's Your First Name: ");
   string answer_2 = get_string("What's Your Last Name: ");
   printf("The name is %s %s \n", answer_1, answer_2);
}
