//LinkedList.c

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#define BUFFER_SIZE 256

// c r e a t e the s t r u c t
struct Node_t_t
{
char *value;
struct Node_t_t *next;
}

// c r e a t e the s h o r t f o rm
typedefstruct Node_t_t Node_t;

// f u n c ti o n t em pl a t e s
Node_t *newNode (const char *value, Node_t *next);
Node_t *deleteNode ( Node_t *current ,char **value);
bool pop (Node_t **head, char **value);
bool push (Node_t **head, const char *value);


// use void as params to silence gcc warnings
int main (void)
{
// i n i t i a l i z e our t hi n g s
Node_t *Stack = NULL;
char buffer [BUFFER_SIZE] = { 0 } ;
// f i l l our s t a c k from the u s e r i n p u t
while ( 1 == scanf ( "%s " , buffer))
{
push(&Stack , buffer);
}
// w ri t e out the s e n t e n c e i n r e v e r s e o r d e r
while ( Stack != NULL)
{
char *str = pop(&Stack);
if (str)
{
printf ( "%s " , str);
free(str) ;
}
}
return EXIT_SUCCESS;
}
/* *************
* TODO: Fi ni s h implementing t h e s e f u n c t i o n s
*/
/**
* r e t u r n a NULL p oi n t e r i f i t f a i l e d t o a l l o c a t e memory
* makes a copy o f the s t r i n g ` value ` on the heap ( s e e s t rdup ( ) )
* and s t o r e s the p oi n t e r i n the newly c r e a t e d Node .
* s e t s the next node t o be the parameter `next `
*/
Node_t *newNode ( const char *value , Node_t *next)
{
return NULL;
}
/***
* pu t s the c u r r e n t node s t r i n g p oi n t e r a t the ` value ` parameter
* f r e e ' s the ` c u r r e n t ` Node .
* and r e t u r n the next node .
*/
Node_t * deleteNode ( Node_t *current , char **value )
{
return NULL;
}
/*
2
* Pop the s t r i n g from the top o f the s t a c k u si n g dele teN ode
* update the top o f the s t a c k
* pu t s the popped s t r i n g onto ` value `
* r e t u r n t r u e on s u c c e s s
*/
bool pop(Node_t **Stack , chr **value)
{
return false;
}
/**
* Push the s t r i n g t o the top o f the s t a c k u si n g newNode
* update the top o f the s t a c k
* r e t u r n t r u e i f e v e r y t hi n g i s s u c c e s s f u l l
*/
bool push( Node_t **Stack , const char *value)
{
return false;
}



/**
• Create the file Makefile with the folowing code inside
# TODO: add t a r g e t s t o c ompile Li n k e dLi s t . c
# TODO: add a t a r g e t f o r each . i n p u t f i l e i n the Data d i r e c t o r y t o run the c ompiled Li n k e dLi s t
program with the t e s t s i n . / Data
# TODO: add a t a r g e t t h a t can run a l l the t e s t s above .
*/
